
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct ff_timer {scalar_t__ next_wake; int needs_wake; int opaque; int (* callback ) (int ) ;int mutex; int cond; scalar_t__ abort; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,struct timespec*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *FUNC_6(void *VAR_2)
{
 struct ff_timer *VAR_3 = (struct ff_timer *)VAR_2;
 int VAR_4;

 while (1) {
  bool VAR_5 = 0;
  FUNC_3(&VAR_3->mutex);

  if (VAR_3->abort) {
   FUNC_4(&VAR_3->mutex);
   break;
  }

  uint64_t VAR_6 = FUNC_0();
  if (VAR_6 < VAR_3->next_wake) {
   struct timespec VAR_7 = {
           .tv_sec = VAR_3->next_wake / VAR_0,
           .tv_nsec = (VAR_3->next_wake % VAR_0) *
                      1000};

   VAR_4 = FUNC_2(
           &VAR_3->cond, &VAR_3->mutex, &VAR_7);
   if (VAR_4 != VAR_1) {

    FUNC_1((unsigned)(VAR_3->next_wake -
                         VAR_6));
   }

   FUNC_4(&VAR_3->mutex);
   continue;



  } else {

   FUNC_1(1000);
  }


  VAR_6 = FUNC_0();
  if (VAR_3->next_wake <= VAR_6 || VAR_3->needs_wake) {
   VAR_5 = 1;
   VAR_3->needs_wake = 0;
  }

  FUNC_4(&VAR_3->mutex);

  if (VAR_5)
   VAR_3->callback(VAR_3->opaque);
 }

 return ((void*)0);
}
