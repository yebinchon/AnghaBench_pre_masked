
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_2 (int ,void*,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,char*,void*,void*,...) ;

int
FUNC_4(HANDLE VAR_8)
{
 void *VAR_9;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_7 != 0);


 VAR_9 = FUNC_2(VAR_8, VAR_5,
        VAR_4,
        VAR_1, VAR_2);
 if (VAR_9 == ((void*)0))
 {

  FUNC_3(VAR_0, "could not reserve shared memory region (addr=%p) for child %p: error code %lu",
    VAR_5, VAR_8, FUNC_1());
  return 0;
 }
 if (VAR_9 != VAR_5)
 {






  FUNC_3(VAR_0, "reserved shared memory region got incorrect address %p, expected %p",
    VAR_9, VAR_5);
  return 0;
 }


 VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_7,
        VAR_1, VAR_3);
 if (VAR_9 == ((void*)0))
 {
  FUNC_3(VAR_0, "could not reserve shared memory region (addr=%p) for child %p: error code %lu",
    VAR_6, VAR_8, FUNC_1());
  return 0;
 }
 if (VAR_9 != VAR_6)
 {
  FUNC_3(VAR_0, "reserved shared memory region got incorrect address %p, expected %p",
    VAR_9, VAR_6);
  return 0;
 }

 return 1;
}
