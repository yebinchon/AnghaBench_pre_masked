
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef int tmpbuf ;
struct TYPE_2__ {int corrupt_prefix; int cipher_algo; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,scalar_t__**,scalar_t__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;

__attribute__((used)) static int
FUNC_4(void **VAR_3, void *VAR_4, PullFilter *VAR_5)
{
 PGP_Context *VAR_6 = VAR_4;
 int VAR_7;
 int VAR_8;
 uint8 *VAR_9;
 uint8 VAR_10[VAR_0 + 2];

 VAR_7 = FUNC_0(VAR_6->cipher_algo);
 if (VAR_7 > sizeof(VAR_10))
  return VAR_1;

 VAR_8 = FUNC_1(VAR_5, VAR_7 + 2, &VAR_9, VAR_10);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_8 != VAR_7 + 2)
 {
  FUNC_2("prefix_init: short read");
  FUNC_3(VAR_10, 0, sizeof(VAR_10));
  return VAR_2;
 }

 if (VAR_9[VAR_7 - 2] != VAR_9[VAR_7] || VAR_9[VAR_7 - 1] != VAR_9[VAR_7 + 1])
 {
  FUNC_2("prefix_init: corrupt prefix");

  VAR_6->corrupt_prefix = 1;
 }
 FUNC_3(VAR_10, 0, sizeof(VAR_10));
 return 0;
}
