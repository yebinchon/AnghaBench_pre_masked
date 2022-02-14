
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct sigaction {int sa_sigaction; void* sa_flags; } ;
typedef int pthread_attr_t ;
typedef int cpu_set_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int *) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,struct sigaction*,int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_12(void)
{
 uint16_t VAR_14 = 1;

 int VAR_15;

 pthread_attr_t VAR_16;
 cpu_set_t VAR_17;

 struct sigaction VAR_18;

 FUNC_2(!FUNC_4());

 VAR_18.sa_flags = VAR_2;
 VAR_18.sa_sigaction = VAR_12;
 FUNC_11(VAR_3, &VAR_18, ((void*)0));

 struct sigaction VAR_19;

 VAR_19.sa_flags = VAR_2;
 VAR_19.sa_sigaction = VAR_13;
 FUNC_11(VAR_4, &VAR_19, ((void*)0));


 FUNC_1(&VAR_17);
 FUNC_0(0, &VAR_17);


 VAR_15 = FUNC_7(&VAR_16);
 if (VAR_15)
  FUNC_5(VAR_15, "pthread_attr_init()");






 VAR_15 = FUNC_8(&VAR_16, sizeof(cpu_set_t), &VAR_17);
 if (VAR_15)
  FUNC_5(VAR_15, "pthread_attr_setaffinity()");


 VAR_6 = (int) *(uint8_t *)&VAR_14;

 FUNC_6("%s machine detected. Checking if endianness flips %s",
  VAR_6 ? "Little-Endian" : "Big-Endian",
  "inadvertently on trap in TM... ");

 VAR_15 = FUNC_3(0);
 if (VAR_15)
  FUNC_5(VAR_15, "fflush()");


 VAR_15 = FUNC_9(&VAR_10, &VAR_16, VAR_7, ((void*)0));
 if (VAR_15)
  FUNC_5(VAR_15, "pthread_create()");

 VAR_5 = 0;


 VAR_15 = FUNC_9(&VAR_11, &VAR_16, VAR_8, ((void*)0));
 if (VAR_15)
  FUNC_5(VAR_15, "pthread_create()");

 VAR_15 = FUNC_10(VAR_10, ((void*)0));
 if (VAR_15)
  FUNC_5(VAR_15, "pthread_join()");

 VAR_15 = FUNC_10(VAR_11, ((void*)0));
 if (VAR_15)
  FUNC_5(VAR_15, "pthread_join()");

 if (VAR_9) {
  FUNC_6("no.\n");
  return VAR_1;
 }

 FUNC_6("yes!\n");
 return VAR_0;
}
