
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef int VarChar ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 size_t FUNC_4 (char const*,size_t,size_t) ;

__attribute__((used)) static VarChar *
FUNC_5(const char *VAR_3, size_t VAR_4, int32 VAR_5)
{
 VarChar *VAR_6;
 size_t VAR_7;

 VAR_7 = VAR_5 - VAR_2;

 if (VAR_5 >= (int32) VAR_2 && VAR_4 > VAR_7)
 {

  size_t VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_7);
  size_t VAR_9;

  for (VAR_9 = VAR_8; VAR_9 < VAR_4; VAR_9++)
  {
   if (VAR_3[VAR_9] != ' ')
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3("value too long for type character varying(%d)",
        (int) VAR_7)));
  }

  VAR_4 = VAR_8;
 }

 VAR_6 = (VarChar *) FUNC_0(VAR_3, VAR_4);
 return VAR_6;
}
