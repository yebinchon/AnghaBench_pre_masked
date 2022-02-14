
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_usec; scalar_t__ tv_sec; } ;
typedef scalar_t__ pg_time_t ;
typedef scalar_t__ XLogRecPtr ;


 int FUNC_0 (int ) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 double VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct timeval*,int *) ;
 double VAR_7 ;

__attribute__((used)) static bool
FUNC_5(double VAR_8)
{
 XLogRecPtr VAR_9;
 struct timeval VAR_10;
 double VAR_11,
    VAR_12;

 FUNC_0(VAR_3);


 VAR_8 *= VAR_0;







 if (VAR_8 < VAR_4)
  return 0;
 if (FUNC_3())
  VAR_9 = FUNC_2(((void*)0));
 else
  VAR_9 = FUNC_1();
 VAR_11 = (((double) (VAR_9 - VAR_5)) /
      VAR_7) / VAR_1;

 if (VAR_8 < VAR_11)
 {
  VAR_4 = VAR_11;
  return 0;
 }




 FUNC_4(&VAR_10, ((void*)0));
 VAR_12 = ((double) ((pg_time_t) VAR_10.tv_sec - VAR_6) +
     VAR_10.tv_usec / 1000000.0) / VAR_2;

 if (VAR_8 < VAR_12)
 {
  VAR_4 = VAR_12;
  return 0;
 }


 return 1;
}
