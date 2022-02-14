
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SyncRequestType ;
typedef int FileTag ;


 int FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*,int ) ;
 int * VAR_0 ;
 int FUNC_2 (long) ;

bool
FUNC_3(const FileTag *VAR_1, SyncRequestType VAR_2,
     bool VAR_3)
{
 bool VAR_4;

 if (VAR_0 != ((void*)0))
 {

  FUNC_1(VAR_1, VAR_2);
  return 1;
 }

 for (;;)
 {
  VAR_4 = FUNC_0(VAR_1, VAR_2);





  if (VAR_4 || (!VAR_4 && !VAR_3))
   break;

  FUNC_2(10000L);
 }

 return VAR_4;
}
