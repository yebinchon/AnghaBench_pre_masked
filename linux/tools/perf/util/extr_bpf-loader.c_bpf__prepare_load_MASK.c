
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_object {int dummy; } ;
struct TYPE_2__ {scalar_t__ dump_obj; } ;


 int VAR_0 ;
 struct bpf_object* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bpf_object*) ;
 struct bpf_object* FUNC_2 (char const*) ;
 struct bpf_object* FUNC_3 (void*,size_t,char const*) ;
 int FUNC_4 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,void**,size_t*) ;
 int FUNC_7 (char const*,void*,size_t) ;
 TYPE_1__ VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 (char const*,void**,size_t*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,...) ;

struct bpf_object *FUNC_12(const char *VAR_4, bool VAR_5)
{
 struct bpf_object *VAR_6;

 if (!VAR_1) {
  FUNC_5(VAR_2);
  VAR_1 = 1;
 }

 if (VAR_5) {
  int VAR_7;
  void *VAR_8;
  size_t VAR_9;

  FUNC_10();
  VAR_7 = FUNC_9(VAR_4, &VAR_8, &VAR_9);
  FUNC_8();
  if (VAR_7) {
   FUNC_11("bpf: builtin compilation failed: %d, try external compiler\n", VAR_7);
   VAR_7 = FUNC_6(VAR_4, &VAR_8, &VAR_9);
   if (VAR_7)
    return FUNC_0(-VAR_0);
  } else
   FUNC_11("bpf: successful builtin compilation\n");
  VAR_6 = FUNC_3(VAR_8, VAR_9, VAR_4);

  if (!FUNC_1(VAR_6) && VAR_3.dump_obj)
   FUNC_7(VAR_4, VAR_8, VAR_9);

  FUNC_4(VAR_8);
 } else
  VAR_6 = FUNC_2(VAR_4);

 if (FUNC_1(VAR_6)) {
  FUNC_11("bpf: failed to load %s\n", VAR_4);
  return VAR_6;
 }

 return VAR_6;
}
