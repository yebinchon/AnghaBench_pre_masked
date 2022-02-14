
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_6__ {scalar_t__ stereo; } ;
struct TYPE_5__ {int speed; } ;
struct TYPE_8__ {TYPE_2__ soft; TYPE_1__ hard; } ;
struct TYPE_7__ {int** buffers; size_t front; int count; int max_count; int active; int block_size; int rear_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int* VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int ,char*,int ) ;
 TYPE_3__ VAR_10 ;

__attribute__((used)) static void FUNC_5(int VAR_11)
{
 u_char *VAR_12;
 u_long VAR_13;
 u_char VAR_14;
 int VAR_15;




 VAR_12 = VAR_10.buffers[VAR_10.front];
 VAR_13 = (VAR_10.count == VAR_11 ? VAR_10.rear_size : VAR_10.block_size);

 VAR_8=VAR_12;
 VAR_9=VAR_13;

 VAR_10.front = (VAR_10.front+1) % VAR_10.max_count;
 VAR_10.active++;

 VAR_14=(VAR_7.hard.speed==10000 ? 0 : 1);

 FUNC_1( 0,VAR_5);
 FUNC_0(VAR_3, VAR_0);
 if (VAR_7.soft.stereo)
  VAR_15 = FUNC_4(VAR_3, VAR_2, 0,
        "Q40 sound", VAR_0);
   else
  VAR_15 = FUNC_4(VAR_3, VAR_1, 0,
        "Q40 sound", VAR_0);
 if (VAR_15 && FUNC_3())
  FUNC_2("Couldn't register sound interrupt\n");

 FUNC_1( VAR_14, VAR_6);
 FUNC_1( 1,VAR_4);
 FUNC_1( 1,VAR_5);
}
