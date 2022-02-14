
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifalias; } ;
struct dev_ifalias {scalar_t__* ifalias; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dev_ifalias*,int ) ;
 struct dev_ifalias* FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__*,char const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct dev_ifalias*,int ) ;
 int VAR_5 ;

int FUNC_7(struct net_device *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct dev_ifalias *VAR_9 = ((void*)0);

 if (VAR_8 >= VAR_3)
  return -VAR_0;

 if (VAR_8) {
  VAR_9 = FUNC_1(sizeof(*VAR_9) + VAR_8 + 1, VAR_2);
  if (!VAR_9)
   return -VAR_1;

  FUNC_2(VAR_9->ifalias, VAR_7, VAR_8);
  VAR_9->ifalias[VAR_8] = 0;
 }

 FUNC_4(&VAR_4);
 FUNC_6(VAR_6->ifalias, VAR_9,
      FUNC_3(&VAR_4));
 FUNC_5(&VAR_4);

 if (VAR_9)
  FUNC_0(VAR_9, VAR_5);

 return VAR_8;
}
