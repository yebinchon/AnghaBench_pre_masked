
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PageData ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int,char const*) ;

__attribute__((used)) static void
FUNC_2(PageData *VAR_1,
       const char *VAR_2, const char *VAR_3,
       int VAR_4, int VAR_5,
       int VAR_6, int VAR_7)
{
 int VAR_8,
    VAR_9,
    VAR_10 = -1,
    VAR_11 = -1;


 if (VAR_6 > VAR_4)
 {
  VAR_10 = VAR_4;
  VAR_4 = VAR_6;
 }


 VAR_9 = FUNC_0(VAR_5, VAR_7);


 VAR_8 = VAR_4;
 while (VAR_8 < VAR_9)
 {
  if (VAR_2[VAR_8] != VAR_3[VAR_8])
  {

   if (VAR_10 < 0)
    VAR_10 = VAR_8;

   VAR_11 = -1;

   VAR_8++;
   while (VAR_8 < VAR_9 && VAR_2[VAR_8] != VAR_3[VAR_8])
    VAR_8++;
   if (VAR_8 >= VAR_9)
    break;
  }


  VAR_11 = VAR_8;





  VAR_8++;
  while (VAR_8 < VAR_9 && VAR_2[VAR_8] == VAR_3[VAR_8])
   VAR_8++;
  if (VAR_10 >= 0 && VAR_8 - VAR_11 > VAR_0)
  {
   FUNC_1(VAR_1, VAR_10,
        VAR_11 - VAR_10,
        VAR_3 + VAR_10);
   VAR_10 = -1;
   VAR_11 = -1;
  }
 }


 if (VAR_9 < VAR_5)
 {
  if (VAR_10 < 0)
   VAR_10 = VAR_9;
  VAR_11 = VAR_5;
 }


 if (VAR_10 >= 0)
 {
  if (VAR_11 < 0)
   VAR_11 = VAR_5;
  FUNC_1(VAR_1, VAR_10,
       VAR_11 - VAR_10,
       VAR_3 + VAR_10);
 }
}
