
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_sec; scalar_t__ tv_nsec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct timespec64*) ;

__attribute__((used)) static void FUNC_3(struct timespec64 VAR_3,
    unsigned long VAR_4, bool VAR_5)

{
 struct timespec64 VAR_6;

 FUNC_0(&VAR_6);
 if (!VAR_5)
  VAR_6.tv_sec = 659;
 else {






  VAR_6.tv_sec = 0;
 }


 VAR_6.tv_nsec = VAR_4 - VAR_6.tv_nsec;
 if (VAR_6.tv_nsec <= 0)
  VAR_6.tv_nsec += VAR_0;
 if (VAR_6.tv_nsec >= VAR_0) {
  VAR_6.tv_sec++;
  VAR_6.tv_nsec -= VAR_0;
 }

 FUNC_1(VAR_2, &VAR_1,
      FUNC_2(&VAR_6));
}
