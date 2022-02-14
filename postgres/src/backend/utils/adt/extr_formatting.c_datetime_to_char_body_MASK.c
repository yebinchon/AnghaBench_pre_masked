
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
typedef int TmToChar ;
struct TYPE_3__ {char* format; } ;
typedef int Oid ;
typedef char FormatNode ;
typedef TYPE_1__ DCHCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int *,char*,int ) ;
 int * FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *) ;

__attribute__((used)) static text *
FUNC_8(TmToChar *VAR_6, text *VAR_7, bool VAR_8, Oid VAR_9)
{
 FormatNode *VAR_10;
 char *VAR_11,
      *VAR_12;
 bool VAR_13;
 int VAR_14;
 text *VAR_15;




 VAR_11 = FUNC_7(VAR_7);
 VAR_14 = FUNC_6(VAR_11);




 VAR_12 = FUNC_3((VAR_14 * VAR_2) + 1);
 *VAR_12 = '\0';

 if (VAR_14 > VAR_0)
 {




  VAR_13 = 0;

  VAR_10 = (FormatNode *) FUNC_3((VAR_14 + 1) * sizeof(FormatNode));

  FUNC_4(VAR_10, VAR_11, VAR_4,
      VAR_5, VAR_3, VAR_1, ((void*)0));
 }
 else
 {



  DCHCacheEntry *VAR_16 = FUNC_0(VAR_11, 0);

  VAR_13 = 1;
  VAR_10 = VAR_16->format;
 }


 FUNC_1(VAR_10, VAR_8, VAR_6, VAR_12, VAR_9);

 if (!VAR_13)
  FUNC_5(VAR_10);

 FUNC_5(VAR_11);


 VAR_15 = FUNC_2(VAR_12);

 FUNC_5(VAR_12);
 return VAR_15;
}
