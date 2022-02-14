
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *) ;
 long FUNC_2 (long) ;
 unsigned long VAR_2 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;

long FUNC_6(int VAR_4, long VAR_5)
{
 long VAR_6;
 unsigned long VAR_7 = VAR_2;
 FUNC_0(VAR_3);
 wait_queue_head_t *VAR_8 = &VAR_1[VAR_4];

 FUNC_4(VAR_8, &VAR_3, VAR_0);
 VAR_6 = FUNC_2(VAR_5);
 FUNC_1(VAR_8, &VAR_3);

 FUNC_5(FUNC_3(VAR_5),
     FUNC_3(VAR_2 - VAR_7));

 return VAR_6;
}
