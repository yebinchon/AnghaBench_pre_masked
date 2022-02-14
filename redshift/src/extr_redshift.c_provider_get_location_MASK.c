
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pollfd {int fd; int events; } ;
typedef int location_t ;
typedef int location_state_t ;
struct TYPE_3__ {int (* get_fd ) (int *) ;int (* handle ) (int *,int *,int*) ;} ;
typedef TYPE_1__ location_provider_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pollfd*,int,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (double*) ;

__attribute__((used)) static int
FUNC_7(
 const location_provider_t *VAR_2, location_state_t *VAR_3,
 int VAR_4, location_t *VAR_5)
{
 int VAR_6 = 0;
 struct pollfd VAR_7[1];
 while (!VAR_6) {
  int VAR_8 = VAR_2->get_fd(VAR_3);
  if (VAR_8 >= 0) {


   double VAR_9;
   int VAR_10 = FUNC_6(&VAR_9);
   if (VAR_10 < 0) {
    FUNC_1(FUNC_0("Unable to read system time.\n"),
          VAR_1);
    return -1;
   }


   VAR_7[0].fd = VAR_8;
   VAR_7[0].events = VAR_0;
   VAR_10 = FUNC_3(VAR_7, 1, VAR_4);
   if (VAR_10 < 0) {
    FUNC_2("poll");
    return -1;
   } else if (VAR_10 == 0) {
    return 0;
   }

   double VAR_11;
   VAR_10 = FUNC_6(&VAR_11);
   if (VAR_10 < 0) {
    FUNC_1(FUNC_0("Unable to read system time.\n"),
          VAR_1);
    return -1;
   }


   if (VAR_4 >= 0) {
    VAR_4 -= (VAR_11 - VAR_9) * 1000;
    VAR_4 = VAR_4 < 0 ? 0 : VAR_4;
   }
  }


  int VAR_12 = VAR_2->handle(VAR_3, VAR_5, &VAR_6);
  if (VAR_12 < 0) return -1;
 }

 return 1;
}
