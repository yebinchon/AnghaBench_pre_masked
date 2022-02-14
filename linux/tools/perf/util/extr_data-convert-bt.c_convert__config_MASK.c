
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct convert {int queue_size; } ;


 int FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct convert *VAR_3 = VAR_2;

 if (!FUNC_1(VAR_0, "convert.queue-size"))
  return FUNC_0(&VAR_3->queue_size, VAR_0, VAR_1);

 return 0;
}
