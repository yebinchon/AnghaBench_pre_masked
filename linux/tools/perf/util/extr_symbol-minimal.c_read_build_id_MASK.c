
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 size_t FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (void*,void*,size_t) ;
 int FUNC_4 (void*,int ,size_t) ;
 size_t FUNC_5 (size_t,size_t) ;

__attribute__((used)) static int FUNC_6(void *VAR_1, size_t VAR_2, void *VAR_3,
    size_t VAR_4, bool VAR_5)
{
 struct {
  u32 n_namesz;
  u32 n_descsz;
  u32 n_type;
 } *VAR_6;
 void *VAR_7;

 VAR_7 = VAR_1;
 while (VAR_7 < (VAR_1 + VAR_2)) {
  const char *VAR_8;
  size_t VAR_9, VAR_10;

  VAR_6 = VAR_7;
  if (VAR_5) {
   VAR_6->n_namesz = FUNC_1(VAR_6->n_namesz);
   VAR_6->n_descsz = FUNC_1(VAR_6->n_descsz);
   VAR_6->n_type = FUNC_1(VAR_6->n_type);
  }

  VAR_9 = FUNC_0(VAR_6->n_namesz);
  VAR_10 = FUNC_0(VAR_6->n_descsz);

  VAR_7 += sizeof(*VAR_6);
  VAR_8 = VAR_7;
  VAR_7 += VAR_9;
  if (VAR_6->n_type == VAR_0 &&
      VAR_6->n_namesz == sizeof("GNU")) {
   if (FUNC_2(VAR_8, "GNU", sizeof("GNU")) == 0) {
    size_t VAR_11 = FUNC_5(VAR_4, VAR_10);
    FUNC_3(VAR_3, VAR_7, VAR_11);
    FUNC_4(VAR_3 + VAR_11, 0, VAR_4 - VAR_11);
    return 0;
   }
  }
  VAR_7 += VAR_10;
 }

 return -1;
}
