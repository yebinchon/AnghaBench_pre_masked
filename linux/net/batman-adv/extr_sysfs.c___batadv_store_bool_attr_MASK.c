
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct attribute {int name; } ;
typedef int ssize_t ;
typedef int atomic_t ;


 int FUNC_0 (char*,size_t,struct net_device*,int ,int *,int*) ;

__attribute__((used)) static inline ssize_t
FUNC_1(char *VAR_0, size_t VAR_1,
    void (*VAR_2)(struct net_device *),
    struct attribute *VAR_3,
    atomic_t *VAR_4, struct net_device *VAR_5)
{
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_5, VAR_3->name,
         VAR_4, &VAR_6);
 if (VAR_2 && VAR_6)
  VAR_2(VAR_5);

 return VAR_7;
}
