
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_midi {int client; int port; int use_lock; } ;


 int VAR_0 ;
 struct seq_oss_midi** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct seq_oss_midi *
FUNC_3(int VAR_3, int VAR_4)
{
 int VAR_5;
 struct seq_oss_midi *VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_2, VAR_7);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = VAR_1[VAR_5];
  if (VAR_6 && VAR_6->client == VAR_3 && VAR_6->port == VAR_4) {

   FUNC_0(&VAR_6->use_lock);
   FUNC_2(&VAR_2, VAR_7);
   return VAR_6;
  }
 }
 FUNC_2(&VAR_2, VAR_7);
 return ((void*)0);
}
