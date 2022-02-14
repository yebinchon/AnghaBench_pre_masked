
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int pt; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 struct thread_data* VAR_3 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct thread_data *VAR_4 = &VAR_3[0];
 int VAR_5, VAR_6 = 0;


 FUNC_0(VAR_4->map, VAR_2);

 VAR_1 = 1;

 for (VAR_5 = 1; !VAR_6 && VAR_5 < VAR_0; VAR_5++)
  VAR_6 = FUNC_1(VAR_3[VAR_5].pt, ((void*)0));

 return VAR_6;
}
