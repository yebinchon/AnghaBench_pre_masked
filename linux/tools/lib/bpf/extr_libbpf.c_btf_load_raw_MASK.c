
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
struct btf {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 struct btf* FUNC_0 (int ) ;
 struct btf* FUNC_1 (void*,size_t) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (void*,int,size_t,int *) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (char const*,struct stat*) ;

__attribute__((used)) static struct btf *FUNC_8(const char *VAR_3)
{
 struct btf *VAR_4;
 size_t VAR_5;
 struct stat VAR_6;
 void *VAR_7;
 FILE *VAR_8;

 if (FUNC_7(VAR_3, &VAR_6))
  return FUNC_0(-VAR_2);

 VAR_7 = FUNC_6(VAR_6.st_size);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_3(VAR_3, "rb");
 if (!VAR_8) {
  VAR_4 = FUNC_0(-VAR_2);
  goto cleanup;
 }

 VAR_5 = FUNC_4(VAR_7, 1, VAR_6.st_size, VAR_8);
 FUNC_2(VAR_8);
 if (VAR_5 < VAR_6.st_size) {
  VAR_4 = FUNC_0(-VAR_0);
  goto cleanup;
 }

 VAR_4 = FUNC_1(VAR_7, VAR_5);

cleanup:
 FUNC_5(VAR_7);
 return VAR_4;
}
