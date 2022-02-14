
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_cache {int fd; } ;
struct nsinfo {int dummy; } ;
struct nscookie {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char const*,struct nsinfo*,int,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char const*,struct nsinfo*,int,int) ;
 char* FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct nsinfo*,struct nscookie*) ;
 int FUNC_7 (struct nscookie*) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char*,char const*,int) ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static int FUNC_14(struct probe_cache *VAR_6, const char *VAR_7,
        struct nsinfo *VAR_8)
{
 char VAR_9[VAR_4];
 char VAR_10[VAR_5];
 char *VAR_11 = ((void*)0);
 bool VAR_12 = 0;
 int VAR_13, VAR_14;
 struct nscookie VAR_15;

 if (VAR_7 && FUNC_1(VAR_7)) {

  FUNC_12(VAR_10, VAR_7, VAR_5);
  VAR_11 = FUNC_3(VAR_10, ((void*)0), 0);
  goto found;
 }

 if (!VAR_7 || !FUNC_11(VAR_7, VAR_0)) {
  VAR_7 = VAR_0;
  VAR_12 = 1;
  VAR_13 = FUNC_13("/", VAR_10);
 } else {
  FUNC_6(VAR_8, &VAR_15);
  VAR_13 = FUNC_4(VAR_7, VAR_10);
  FUNC_7(&VAR_15);
 }

 if (VAR_13 < 0) {
  FUNC_9("Failed to get build-id from %s.\n", VAR_7);
  return VAR_13;
 }


 if (!FUNC_1(VAR_10)) {
  VAR_13 = FUNC_0(VAR_10, VAR_7, VAR_8,
         VAR_12, ((void*)0));
  if (VAR_13 < 0) {
   FUNC_9("Failed to add build-id cache: %s\n", VAR_7);
   return VAR_13;
  }
 }

 VAR_11 = FUNC_2(VAR_10, VAR_7, VAR_8, VAR_12,
         0);
found:
 if (!VAR_11) {
  FUNC_9("Failed to get cache from %s\n", VAR_7);
  return -VAR_1;
 }

 FUNC_10(VAR_9, VAR_4, "%s/probes", VAR_11);
 VAR_14 = FUNC_8(VAR_9, VAR_2 | VAR_3, 0644);
 if (VAR_14 < 0)
  FUNC_9("Failed to open cache(%d): %s\n", VAR_14, VAR_9);
 FUNC_5(VAR_11);
 VAR_6->fd = VAR_14;

 return VAR_14;
}
