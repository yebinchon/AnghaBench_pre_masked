
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ txid ;
typedef int TxidSnapshot ;
typedef int StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char const**) ;

__attribute__((used)) static TxidSnapshot *
FUNC_7(const char *VAR_2)
{
 txid VAR_3;
 txid VAR_4;
 txid VAR_5 = 0,
    VAR_6;
 const char *VAR_7 = VAR_2;
 const char *VAR_8;
 StringInfo VAR_9;

 VAR_3 = FUNC_6(VAR_2, &VAR_8);
 if (*VAR_8 != ':')
  goto bad_format;
 VAR_2 = VAR_8 + 1;

 VAR_4 = FUNC_6(VAR_2, &VAR_8);
 if (*VAR_8 != ':')
  goto bad_format;
 VAR_2 = VAR_8 + 1;


 if (VAR_3 == 0 || VAR_4 == 0 || VAR_3 > VAR_4)
  goto bad_format;


 VAR_9 = FUNC_2(VAR_3, VAR_4);


 while (*VAR_2 != '\0')
 {

  VAR_6 = FUNC_6(VAR_2, &VAR_8);
  VAR_2 = VAR_8;


  if (VAR_6 < VAR_3 || VAR_6 >= VAR_4 || VAR_6 < VAR_5)
   goto bad_format;


  if (VAR_6 != VAR_5)
   FUNC_0(VAR_9, VAR_6);
  VAR_5 = VAR_6;

  if (*VAR_2 == ',')
   VAR_2++;
  else if (*VAR_2 != '\0')
   goto bad_format;
 }

 return FUNC_1(VAR_9);

bad_format:
 FUNC_3(VAR_1,
   (FUNC_4(VAR_0),
    FUNC_5("invalid input syntax for type %s: \"%s\"",
     "txid_snapshot", VAR_7)));
 return ((void*)0);
}
