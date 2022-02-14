
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vsio_sigproc_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int sio_sigproc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_4(int VAR_9, struct sockaddr_in *const VAR_10, int VAR_11)
{
 int VAR_12;

 vsio_sigproc_t VAR_13, VAR_14;

 size_t VAR_15;

 if (VAR_11 < 0) {
  VAR_6 = 0;
  for (;;) {
   VAR_15 = sizeof(struct sockaddr_in);
   VAR_12 = FUNC_2(VAR_9, (struct sockaddr *) VAR_10, (int *) &VAR_15);
   if ((VAR_12 >= 0) || (VAR_6 != VAR_0))
    return (VAR_12);
  }
 }

 if (FUNC_0(VAR_7) != 0) {
  FUNC_3(0);
  (void) FUNC_1(VAR_2, (sio_sigproc_t) VAR_13);
  (void) FUNC_1(VAR_3, (sio_sigproc_t) VAR_14);
  VAR_6 = VAR_1;
  return (VAR_8);
 }

 VAR_13 = (vsio_sigproc_t) FUNC_1(VAR_2, VAR_5);
 VAR_14 = (vsio_sigproc_t) FUNC_1(VAR_3, VAR_4);
 FUNC_3((unsigned int) VAR_11);

 VAR_6 = 0;
 do {
  VAR_15 = sizeof(struct sockaddr_in);
  VAR_12 = FUNC_2(VAR_9, (struct sockaddr *) VAR_10, (int *) &VAR_15);
 } while ((VAR_12 < 0) && (VAR_6 == VAR_0));

 FUNC_3(0);
 (void) FUNC_1(VAR_2, (sio_sigproc_t) VAR_13);
 (void) FUNC_1(VAR_3, (sio_sigproc_t) VAR_14);
 return (VAR_12);



}
