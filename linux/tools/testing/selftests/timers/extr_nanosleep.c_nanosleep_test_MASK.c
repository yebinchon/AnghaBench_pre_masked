
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct timespec*) ;
 scalar_t__ FUNC_1 (int,int ,struct timespec*,int *) ;
 int FUNC_2 (struct timespec,struct timespec) ;
 struct timespec FUNC_3 (struct timespec,long long) ;

int FUNC_4(int VAR_2, long long VAR_3)
{
 struct timespec VAR_4, VAR_5, VAR_6;


 if (FUNC_0(VAR_2, &VAR_4))
  return VAR_1;
 VAR_5 = FUNC_3(VAR_4, VAR_3);

 if (FUNC_1(VAR_2, VAR_0, &VAR_5, ((void*)0)))
  return VAR_1;
 FUNC_0(VAR_2, &VAR_4);

 if (!FUNC_2(VAR_5, VAR_4))
  return -1;


 FUNC_0(VAR_2, &VAR_4);
 VAR_6.tv_sec = 0;
 VAR_6.tv_nsec = 0;
 VAR_6 = FUNC_3(VAR_6, VAR_3);
 VAR_5 = FUNC_3(VAR_4, VAR_3);
 FUNC_1(VAR_2, 0, &VAR_6, ((void*)0));
 FUNC_0(VAR_2, &VAR_4);

 if (!FUNC_2(VAR_5, VAR_4))
  return -1;
 return 0;
}
