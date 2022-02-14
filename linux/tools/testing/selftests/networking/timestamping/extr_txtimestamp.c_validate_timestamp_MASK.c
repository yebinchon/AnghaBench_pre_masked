
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int ,char*,scalar_t__,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct timespec*) ;
 struct timespec VAR_2 ;

__attribute__((used)) static void FUNC_2(struct timespec *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 + 500 ;
 int64_t VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_3);
 VAR_7 = FUNC_1(&VAR_2);

 if (VAR_6 < VAR_7 + VAR_4 || VAR_6 > VAR_7 + VAR_5) {
  FUNC_0(VAR_0, "ERROR: delay %lu expected between %d and %d\n",
    VAR_6 - VAR_7, VAR_4, VAR_5);
  VAR_1 = 1;
 }
}
