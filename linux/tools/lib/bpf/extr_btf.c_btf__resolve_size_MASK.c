
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int size; int type; } ;
struct btf_array {int nelems; int type; } ;
struct btf {int dummy; } ;
typedef int __u32 ;
typedef int __s64 ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btf_type* FUNC_0 (struct btf const*,int) ;
 struct btf_array* FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct btf_type const*) ;

__s64 FUNC_4(const struct btf *VAR_4, __u32 VAR_5)
{
 const struct btf_array *VAR_6;
 const struct btf_type *VAR_7;
 __u32 VAR_8 = 1;
 __s64 VAR_9 = -1;
 int VAR_10;

 VAR_7 = FUNC_0(VAR_4, VAR_5);
 for (VAR_10 = 0; VAR_10 < VAR_2 && !FUNC_3(VAR_7);
      VAR_10++) {
  switch (FUNC_2(VAR_7)) {
  case 135:
  case 132:
  case 130:
  case 136:
  case 137:
   VAR_9 = VAR_7->size;
   goto done;
  case 134:
   VAR_9 = sizeof(void *);
   goto done;
  case 131:
  case 128:
  case 138:
  case 133:
  case 129:
   VAR_5 = VAR_7->type;
   break;
  case 139:
   VAR_6 = FUNC_1(VAR_7);
   if (VAR_8 && VAR_6->nelems > VAR_3 / VAR_8)
    return -VAR_0;
   VAR_8 *= VAR_6->nelems;
   VAR_5 = VAR_6->type;
   break;
  default:
   return -VAR_1;
  }

  VAR_7 = FUNC_0(VAR_4, VAR_5);
 }

 if (VAR_9 < 0)
  return -VAR_1;

done:
 if (VAR_8 && VAR_9 > VAR_3 / VAR_8)
  return -VAR_0;

 return VAR_8 * VAR_9;
}
