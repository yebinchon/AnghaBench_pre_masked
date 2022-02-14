
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_8__ {int num_channels; int width; int height; int keylayout; int keyboard_type; int keyboard_subtype; int keyboard_functionkeys; int server_depth; TYPE_2__* channel_defs; TYPE_1__* channels; scalar_t__ encryption; scalar_t__ console_session; scalar_t__ use_rdp5; } ;
struct TYPE_7__ {int options; int name; } ;
struct TYPE_6__ {int name; } ;
typedef int STREAM ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_3__*,int ,int *,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(RDPCLIENT * VAR_4, STREAM VAR_5, wchar_t * VAR_6)
{
 int VAR_7 = 2 * (int)FUNC_11(VAR_6);
 int VAR_8 = 158 + 76 + 12 + 4;
 unsigned int VAR_9;

 if (VAR_4->num_channels > 0)
  VAR_8 += VAR_4->num_channels * 12 + 8;

 if (VAR_7 > 30)
  VAR_7 = 30;


 FUNC_1(VAR_5, 5);
 FUNC_1(VAR_5, 0x14);
 FUNC_6(VAR_5, 0x7c);
 FUNC_1(VAR_5, 1);

 FUNC_1(VAR_5, (VAR_8 | 0x8000));

 FUNC_1(VAR_5, 8);
 FUNC_1(VAR_5, 16);
 FUNC_6(VAR_5, 0);
 FUNC_2(VAR_5, 0xc001);
 FUNC_6(VAR_5, 0);

 FUNC_5(VAR_5, 0x61637544);
 FUNC_1(VAR_5, ((VAR_8 - 14) | 0x8000));


 FUNC_2(VAR_5, VAR_3);
 FUNC_2(VAR_5, 212);
 FUNC_2(VAR_5, VAR_4->use_rdp5 ? 4 : 1);
 FUNC_2(VAR_5, 8);
 FUNC_2(VAR_5, VAR_4->width);
 FUNC_2(VAR_5, VAR_4->height);
 FUNC_2(VAR_5, 0xca01);
 FUNC_2(VAR_5, 0xaa03);
 FUNC_5(VAR_5, VAR_4->keylayout);
 FUNC_5(VAR_5, 2600);


 FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_8(VAR_5, 30 - VAR_7);



 FUNC_5(VAR_5, VAR_4->keyboard_type);
 FUNC_5(VAR_5, VAR_4->keyboard_subtype);
 FUNC_5(VAR_5, VAR_4->keyboard_functionkeys);
 FUNC_8(VAR_5, 64);
 FUNC_2(VAR_5, 0xca01);
 FUNC_2(VAR_5, 1);

 FUNC_3(VAR_5, 0);
 FUNC_6(VAR_5, VAR_4->server_depth);
 FUNC_2(VAR_5, 0x0700);
 FUNC_6(VAR_5, 0);
 FUNC_5(VAR_5, 1);
 FUNC_8(VAR_5, 64);

 FUNC_2(VAR_5, VAR_0);
 FUNC_2(VAR_5, 12);
 FUNC_5(VAR_5, VAR_4->console_session ? 0xb : 9);
 FUNC_3(VAR_5, 0);


 FUNC_2(VAR_5, VAR_2);
 FUNC_2(VAR_5, 12);
 FUNC_5(VAR_5, VAR_4->encryption ? 0x3 : 0);
 FUNC_3(VAR_5, 0);

 FUNC_0(("This->num_channels is %d\n", VAR_4->num_channels));
 if (VAR_4->num_channels > 0)
 {
  FUNC_2(VAR_5, VAR_1);
  FUNC_2(VAR_5, VAR_4->num_channels * 12 + 8);
  FUNC_5(VAR_5, VAR_4->num_channels);
  for (VAR_9 = 0; VAR_9 < VAR_4->num_channels; VAR_9++)
  {
   FUNC_0(("Requesting channel %s\n", VAR_4->channels[VAR_9].name));
   FUNC_7(VAR_5, VAR_4->channel_defs[VAR_9].name, 8);
   FUNC_4(VAR_5, VAR_4->channel_defs[VAR_9].options);
  }
 }

 FUNC_10(VAR_5);
}
