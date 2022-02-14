
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int registered_buffer ;
typedef int XLogRecData ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

void
FUNC_3(void)
{

 if (VAR_10 == ((void*)0))
 {
  VAR_10 = FUNC_0(VAR_2,
              "WAL record construction",
              VAR_0);
 }

 if (VAR_9 == ((void*)0))
 {
  VAR_9 = (registered_buffer *)
   FUNC_2(VAR_10,
           sizeof(registered_buffer) * (VAR_3 + 1));
  VAR_7 = VAR_3 + 1;
 }
 if (VAR_8 == ((void*)0))
 {
  VAR_8 = FUNC_1(VAR_10,
         sizeof(XLogRecData) * VAR_4);
  VAR_6 = VAR_4;
 }




 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_2(VAR_10,
            VAR_1);
}
