
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; double tv_usec; } ;


 int VAR_0 ;
 double VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,double,double) ;

__attribute__((used)) static void
FUNC_2(struct timeval VAR_2, struct timeval VAR_3, int VAR_4)
{
 double VAR_5 = (VAR_3.tv_sec - VAR_2.tv_sec) +
 (VAR_3.tv_usec - VAR_2.tv_usec) * 0.000001;
 double VAR_6 = VAR_4 / VAR_5;
 double VAR_7 = (VAR_5 / VAR_4) * VAR_1;

 FUNC_1(FUNC_0(VAR_0), VAR_6, VAR_7);
}
