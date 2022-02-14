
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;


 int FUNC_0 (int ,int,int ) ;
 struct bpf_object* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct bpf_object*) ;
 int VAR_2 ;
 int FUNC_3 (struct bpf_object*) ;
 int FUNC_4 (struct bpf_object*) ;
 int FUNC_5 (struct bpf_object*) ;
 int FUNC_6 (struct bpf_object*,int) ;
 int FUNC_7 (struct bpf_object*) ;
 int FUNC_8 (struct bpf_object*) ;
 struct bpf_object* FUNC_9 (char const*,void*,size_t) ;
 int FUNC_10 (struct bpf_object*) ;
 int FUNC_11 (struct bpf_object*,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_3 ;
 int FUNC_13 (char*,char const*) ;

__attribute__((used)) static struct bpf_object *
FUNC_14(const char *VAR_4, void *VAR_5, size_t VAR_6,
     bool VAR_7, int VAR_8)
{
 struct bpf_object *VAR_9;
 int VAR_10;

 if (FUNC_12(VAR_0) == VAR_1) {
  FUNC_13("failed to init libelf for %s\n", VAR_4);
  return FUNC_1(-VAR_2);
 }

 VAR_9 = FUNC_9(VAR_4, VAR_5, VAR_6);
 if (FUNC_2(VAR_9))
  return VAR_9;

 FUNC_0(FUNC_8(VAR_9), VAR_10, VAR_3);
 FUNC_0(FUNC_3(VAR_9), VAR_10, VAR_3);
 FUNC_0(FUNC_10(VAR_9), VAR_10, VAR_3);
 FUNC_0(FUNC_6(VAR_9, VAR_8), VAR_10, VAR_3);
 FUNC_0(FUNC_5(VAR_9), VAR_10, VAR_3);
 FUNC_0(FUNC_11(VAR_9, VAR_7), VAR_10, VAR_3);

 FUNC_7(VAR_9);
 return VAR_9;
out:
 FUNC_4(VAR_9);
 return FUNC_1(VAR_10);
}
