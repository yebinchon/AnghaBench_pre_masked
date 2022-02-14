
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpool_ops {scalar_t__ evict; } ;
struct zpool_driver {scalar_t__ shrink; int (* create ) (char const*,int ,struct zpool_ops const*,struct zpool*) ;} ;
struct zpool {int evictable; int list; int pool; struct zpool_ops const* ops; struct zpool_driver* driver; } ;
typedef int gfp_t ;


 int FUNC_0 (struct zpool*) ;
 struct zpool* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,int ,struct zpool_ops const*,struct zpool*) ;
 struct zpool_driver* FUNC_9 (char const*) ;
 int FUNC_10 (struct zpool_driver*) ;

struct zpool *FUNC_11(const char *VAR_2, const char *VAR_3, gfp_t VAR_4,
  const struct zpool_ops *VAR_5)
{
 struct zpool_driver *VAR_6;
 struct zpool *VAR_7;

 FUNC_3("creating pool type %s\n", VAR_2);

 VAR_6 = FUNC_9(VAR_2);

 if (!VAR_6) {
  FUNC_5("zpool-%s", VAR_2);
  VAR_6 = FUNC_9(VAR_2);
 }

 if (!VAR_6) {
  FUNC_4("no driver for type %s\n", VAR_2);
  return ((void*)0);
 }

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_4);
 if (!VAR_7) {
  FUNC_4("couldn't create zpool - out of memory\n");
  FUNC_10(VAR_6);
  return ((void*)0);
 }

 VAR_7->driver = VAR_6;
 VAR_7->pool = VAR_6->create(VAR_3, VAR_4, VAR_5, VAR_7);
 VAR_7->ops = VAR_5;
 VAR_7->evictable = VAR_6->shrink && VAR_5 && VAR_5->evict;

 if (!VAR_7->pool) {
  FUNC_4("couldn't create %s pool\n", VAR_2);
  FUNC_10(VAR_6);
  FUNC_0(VAR_7);
  return ((void*)0);
 }

 FUNC_3("created pool type %s\n", VAR_2);

 FUNC_6(&VAR_1);
 FUNC_2(&VAR_7->list, &VAR_0);
 FUNC_7(&VAR_1);

 return VAR_7;
}
