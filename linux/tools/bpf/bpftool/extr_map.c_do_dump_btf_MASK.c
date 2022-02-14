
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dumper {int jw; } ;
struct bpf_map_info {scalar_t__ btf_value_type_id; int value_size; int type; scalar_t__ btf_key_type_id; } ;


 int FUNC_0 (struct btf_dumper const*,scalar_t__,void*) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(const struct btf_dumper *VAR_0,
         struct bpf_map_info *VAR_1, void *VAR_2,
         void *VAR_3)
{
 int VAR_4;


 FUNC_7(VAR_0->jw);

 if (VAR_1->btf_key_type_id) {
  FUNC_5(VAR_0->jw, "key");

  VAR_4 = FUNC_0(VAR_0, VAR_1->btf_key_type_id, VAR_2);
  if (VAR_4)
   goto err_end_obj;
 }

 if (!FUNC_8(VAR_1->type)) {
  FUNC_5(VAR_0->jw, "value");
  VAR_4 = FUNC_0(VAR_0, VAR_1->btf_value_type_id, VAR_3);
 } else {
  unsigned int VAR_5, VAR_6, VAR_7;

  FUNC_5(VAR_0->jw, "values");
  FUNC_6(VAR_0->jw);
  VAR_6 = FUNC_1();
  VAR_7 = FUNC_9(VAR_1->value_size, 8);
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   FUNC_7(VAR_0->jw);
   FUNC_4(VAR_0->jw, "cpu", VAR_5);
   FUNC_5(VAR_0->jw, "value");
   VAR_4 = FUNC_0(VAR_0, VAR_1->btf_value_type_id,
           VAR_3 + VAR_5 * VAR_7);
   FUNC_3(VAR_0->jw);
   if (VAR_4)
    break;
  }
  FUNC_2(VAR_0->jw);
 }

err_end_obj:

 FUNC_3(VAR_0->jw);

 return VAR_4;
}
