
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_4__ {int uc; } ;
typedef TYPE_1__ block8 ;
typedef int UINT32_T ;
struct TYPE_5__ {int keysum; int badcryptxt; int cryptxt; int plaintxt; int salt; scalar_t__ password; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_9()
{
    int VAR_7, VAR_8;
    int VAR_9 = 0;
    block8 VAR_10;
    UINT32_T VAR_11 = 0xffffffffUL;



    if (VAR_11 != 0xffffffffUL || VAR_11 + 1 != 0) {
 VAR_9++;
 FUNC_1(FUNC_3("E820: sizeof(uint32_t) != 4"));
    }

    if (!FUNC_4(VAR_3, VAR_5, 0x6ffa520a))
 VAR_9++;

    VAR_8 = FUNC_0(VAR_2);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    {
 FUNC_6((char_u *)(VAR_2[VAR_7].password),
      VAR_2[VAR_7].salt,
      (int)FUNC_2(VAR_2[VAR_7].salt));
 if (!FUNC_4(VAR_4, VAR_6, VAR_2[VAR_7].keysum))
     VAR_9++;


 FUNC_8(VAR_10.uc, VAR_2[VAR_7].plaintxt, 8);
 FUNC_5(VAR_10.uc);
 if (FUNC_7(VAR_10.uc, VAR_2[VAR_7].cryptxt, 8) != 0)
 {
     if (VAR_9 == 0 && FUNC_7(VAR_10.uc, VAR_2[VAR_7].badcryptxt, 8) == 0)
  FUNC_1(FUNC_3("E817: Blowfish big/little endian use wrong"));
     VAR_9++;
 }
    }

    return VAR_9 > 0 ? VAR_0 : VAR_1;
}
