
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ids_vec {int* data; scalar_t__ len; } ;
struct btf_type {int name_off; } ;
struct btf {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ids_vec* FUNC_0 (int) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (struct ids_vec*) ;
 int FUNC_3 (struct btf const*) ;
 char* FUNC_4 (struct btf const*,int ) ;
 struct btf_type* FUNC_5 (struct btf const*,int) ;
 struct ids_vec* FUNC_6 (int,int) ;
 int FUNC_7 (char*,int,char const*,int,char const*) ;
 int* FUNC_8 (int*,scalar_t__) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*,size_t) ;

__attribute__((used)) static struct ids_vec *FUNC_11(const struct btf *VAR_2,
        __u32 VAR_3,
        const struct btf *VAR_4)
{
 size_t VAR_5, VAR_6;
 const char *VAR_7, *VAR_8;
 const struct btf_type *VAR_9;
 struct ids_vec *VAR_10;
 __u32 *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_9 = FUNC_5(VAR_2, VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_4(VAR_2, VAR_9->name_off);
 if (FUNC_9(VAR_7))
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_1(VAR_7);

 VAR_10 = FUNC_6(1, sizeof(*VAR_10));
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_14 = FUNC_3(VAR_4);
 for (VAR_12 = 1; VAR_12 <= VAR_14; VAR_12++) {
  VAR_9 = FUNC_5(VAR_4, VAR_12);
  VAR_8 = FUNC_4(VAR_4, VAR_9->name_off);
  if (FUNC_9(VAR_8))
   continue;

  VAR_6 = FUNC_1(VAR_8);
  if (VAR_6 != VAR_5)
   continue;

  if (FUNC_10(VAR_7, VAR_8, VAR_5) == 0) {
   FUNC_7("[%d] %s: found candidate [%d] %s\n",
     VAR_3, VAR_7, VAR_12, VAR_8);
   VAR_11 = FUNC_8(VAR_10->data, VAR_10->len + 1);
   if (!VAR_11) {
    VAR_13 = -VAR_1;
    goto err_out;
   }
   VAR_10->data = VAR_11;
   VAR_10->data[VAR_10->len++] = VAR_12;
  }
 }
 return VAR_10;
err_out:
 FUNC_2(VAR_10);
 return FUNC_0(VAR_13);
}
