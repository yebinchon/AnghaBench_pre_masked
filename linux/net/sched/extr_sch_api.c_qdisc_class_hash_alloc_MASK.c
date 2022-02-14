
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hlist_head*) ;
 struct hlist_head* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_2(unsigned int VAR_1)
{
 struct hlist_head *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_1(VAR_1, sizeof(struct hlist_head), VAR_0);

 if (VAR_2 != ((void*)0)) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   FUNC_0(&VAR_2[VAR_3]);
 }
 return VAR_2;
}
