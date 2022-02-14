
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ IpcSemaphoreKey ;
typedef int IpcSemaphoreId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,unsigned long,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__,int,int) ;

__attribute__((used)) static IpcSemaphoreId
FUNC_5(IpcSemaphoreKey VAR_9, int VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_4(VAR_9, VAR_10, VAR_6 | VAR_7 | VAR_5);

 if (VAR_11 < 0)
 {
  int VAR_12 = VAR_8;







  if (VAR_12 == VAR_1 || VAR_12 == VAR_0



   )
   return -1;




  FUNC_0(VAR_4,
    (FUNC_3("could not create semaphores: %m"),
     FUNC_1("Failed system call was semget(%lu, %d, 0%o).",
         (unsigned long) VAR_9, VAR_10,
         VAR_6 | VAR_7 | VAR_5),
     (VAR_12 == VAR_3) ?
     FUNC_2("This error does *not* mean that you have run out of disk space.  "
       "It occurs when either the system limit for the maximum number of "
       "semaphore sets (SEMMNI), or the system wide maximum number of "
       "semaphores (SEMMNS), would be exceeded.  You need to raise the "
       "respective kernel parameter.  Alternatively, reduce PostgreSQL's "
       "consumption of semaphores by reducing its max_connections parameter.\n"
       "The PostgreSQL documentation contains more information about "
       "configuring your system for PostgreSQL.") : 0));
 }

 return VAR_11;
}
