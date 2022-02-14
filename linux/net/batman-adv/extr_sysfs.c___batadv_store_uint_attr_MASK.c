
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct attribute {int name; } ;
typedef int ssize_t ;
typedef int atomic_t ;


 int FUNC_0 (char const*,size_t,struct net_device*,struct net_device*,int ,int,int,int *) ;

__attribute__((used)) static ssize_t FUNC_1(const char *VAR_0, size_t VAR_1,
     int VAR_2, int VAR_3,
     void (*VAR_4)(struct net_device *),
     const struct attribute *VAR_5,
     atomic_t *VAR_6,
     struct net_device *VAR_7,
     struct net_device *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_7, VAR_8,
         VAR_5->name, VAR_2, VAR_3, VAR_6);
 if (VAR_4 && VAR_9)
  VAR_4(VAR_7);

 return VAR_9;
}
