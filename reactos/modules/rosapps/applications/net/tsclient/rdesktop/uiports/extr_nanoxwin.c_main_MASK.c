
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_4__ {int bpp; int vs_height; int vs_width; } ;
typedef scalar_t__ GR_CURSOR_ID ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_19 ;
 int FUNC_17 (int,char**) ;
 int FUNC_18 (int ,int ,int ,int ,int ,int ) ;
 int VAR_20 ;
 scalar_t__ FUNC_19 (int ,int ,int,int,int ,int ) ;
 int FUNC_20 (void*) ;

int FUNC_21(int VAR_21, char ** VAR_22)
{
  FUNC_15();

  if (!FUNC_17(VAR_21, VAR_22))
  {
    FUNC_13(0);
  }

  if (FUNC_9() < 0)
  {
    FUNC_14(VAR_20, "Couldn't connect to Nano-X server\n");
    FUNC_13(1);
  }
  FUNC_4(&VAR_13);
  VAR_2 = VAR_13.bpp;
  VAR_1 = (VAR_13.bpp + 7) / 8;
  VAR_17 = VAR_13.vs_width;
  VAR_9 = VAR_13.vs_height;
  VAR_3.x = 0;
  VAR_3.y = 0;
  VAR_3.width = VAR_17;
  VAR_3.height = VAR_9;
  if (!((VAR_2 == 32 && VAR_14 == 16) ||
        (VAR_2 == 16 && VAR_14 == 16)))
  {
    FUNC_14(VAR_20, "unsupported bpp, server = %d, client = %d\n",
            VAR_14, VAR_2);
    FUNC_0();
    FUNC_13(0);
  }
  FUNC_16();

  if (!FUNC_18(VAR_15, VAR_6, VAR_5, VAR_11, VAR_16,
                   VAR_4))
  {
    FUNC_14(VAR_20, "Error connecting\n");
    FUNC_0();
    FUNC_13(1);
  }

  VAR_18 = FUNC_8(VAR_0, 0, 0, VAR_17, VAR_9, 0, 0, 0);

  FUNC_6(VAR_18);

  VAR_7 = FUNC_7();
  VAR_8 = FUNC_7();

  FUNC_12(VAR_7, 0);
  FUNC_3(VAR_18, VAR_7, 0, 0, VAR_17, VAR_9);

  VAR_10 = (GR_CURSOR_ID)FUNC_19(0, 0, 32, 32, 0, 0);

  FUNC_11(VAR_18, -1);
  FUNC_10(VAR_12);
  FUNC_5(VAR_19);

  FUNC_20((void*)VAR_10);

  FUNC_1(VAR_7);
  FUNC_1(VAR_8);

  FUNC_2(VAR_18);

  FUNC_0();
  return 0;
}
