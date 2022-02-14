
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static size_t FUNC_1(const char *VAR_0)
{
  char *VAR_1 = 0;
  size_t VAR_2 = FUNC_0(VAR_0, &VAR_1, 0);

  if (VAR_1) {
    int VAR_3;
    if (*VAR_1 == 'k' || *VAR_1 == 'K') {
      VAR_3 = 1 << 10;
      VAR_1++;
    } else if (*VAR_1 == 'm' || *VAR_1 == 'M') {
      VAR_3 = 1 << 20;
      VAR_1++;
    } else {
      VAR_3 = 1;
    }

    if (*VAR_1 == 'B') {
      VAR_3 = VAR_3 << 3;
    }

    VAR_2 = (VAR_2 * VAR_3) / 8;
  }

  return VAR_2;
}
