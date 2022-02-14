
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef int BpChar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 char* FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char,size_t) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 size_t FUNC_8 (char const*,size_t,size_t) ;
 size_t FUNC_9 (char const*,size_t) ;

__attribute__((used)) static BpChar *
FUNC_10(const char *VAR_3, size_t VAR_4, int32 VAR_5)
{
 BpChar *VAR_6;
 char *VAR_7;
 size_t VAR_8;


 if (VAR_5 < (int32) VAR_2)
  VAR_8 = VAR_4;
 else
 {
  size_t VAR_9;

  VAR_8 = VAR_5 - VAR_2;
  VAR_9 = FUNC_9(VAR_3, VAR_4);
  if (VAR_9 > VAR_8)
  {

   size_t VAR_10 = FUNC_8(VAR_3, VAR_4, VAR_8);
   size_t VAR_11;






   for (VAR_11 = VAR_10; VAR_11 < VAR_4; VAR_11++)
   {
    if (VAR_3[VAR_11] != ' ')
     FUNC_2(VAR_1,
       (FUNC_3(VAR_0),
        FUNC_4("value too long for type character(%d)",
         (int) VAR_8)));
   }





   VAR_8 = VAR_4 = VAR_10;
  }
  else
  {




   VAR_8 = VAR_4 + (VAR_8 - VAR_9);
  }
 }

 VAR_6 = (BpChar *) FUNC_7(VAR_8 + VAR_2);
 FUNC_0(VAR_6, VAR_8 + VAR_2);
 VAR_7 = FUNC_1(VAR_6);
 FUNC_5(VAR_7, VAR_3, VAR_4);


 if (VAR_8 > VAR_4)
  FUNC_6(VAR_7 + VAR_4, ' ', VAR_8 - VAR_4);

 return VAR_6;
}
