
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct node_link {scalar_t__ output_slot; scalar_t__ input_slot; int output_id; int input_id; } ;
struct TYPE_7__ {int x; int y; } ;
struct TYPE_6__ {int input_slot; struct node* node; void* active; int input_id; } ;
struct node_editor {int initialized; int show_grid; int link_count; TYPE_2__ scrolling; struct node* selected; int bounds; struct node* begin; struct node_link* links; TYPE_1__ linking; struct node* end; int node_count; } ;
struct nk_rect {float h; int x; float w; int y; } ;
struct TYPE_10__ {void* a; void* b; void* g; void* r; } ;
struct node {int output_count; int input_count; struct node* next; struct nk_rect bounds; int ID; TYPE_5__ color; scalar_t__ prev; int name; } ;
struct nk_vec2 {int x; int y; } ;
struct nk_panel {struct nk_rect bounds; } ;
struct TYPE_8__ {int x; int y; } ;
struct TYPE_9__ {TYPE_3__ delta; struct nk_vec2 pos; } ;
struct nk_input {TYPE_4__ mouse; } ;
struct nk_context {struct nk_input input; } ;
struct nk_command_buffer {int dummy; } ;
struct nk_color {int dummy; } ;
typedef void* nk_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,float const) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct nk_context*,char*,int ,int) ;
 int FUNC_3 (struct nk_context*,TYPE_5__) ;
 scalar_t__ FUNC_4 (struct nk_context*,int ,struct nk_vec2,struct nk_rect) ;
 int FUNC_5 (struct nk_context*) ;
 scalar_t__ FUNC_6 (struct nk_context*,char const*,int ) ;
 int FUNC_7 (struct nk_context*) ;
 void* VAR_9 ;
 int FUNC_8 (struct nk_command_buffer*,struct nk_rect,struct nk_color) ;
 scalar_t__ FUNC_9 (struct nk_context*,int ,int) ;
 int FUNC_10 (struct nk_context*) ;
 scalar_t__ FUNC_11 (struct nk_input const*,int ,struct nk_rect,void*) ;
 scalar_t__ FUNC_12 (struct nk_input const*,int ) ;
 scalar_t__ FUNC_13 (struct nk_input const*,struct nk_rect) ;
 scalar_t__ FUNC_14 (struct nk_input const*,int ) ;
 scalar_t__ FUNC_15 (struct nk_input const*,int ,struct nk_rect) ;
 int FUNC_16 (struct nk_context*,int,int) ;
 int FUNC_17 (struct nk_context*,int ,float,int ) ;
 struct nk_rect FUNC_18 (struct nk_context*) ;
 int FUNC_19 (struct nk_context*) ;
 int FUNC_20 (struct nk_context*,int ) ;
 struct nk_rect FUNC_21 (struct nk_context*,struct nk_rect) ;
 struct nk_rect FUNC_22 (struct nk_context*,struct nk_rect) ;
 struct nk_vec2 FUNC_23 (struct nk_context*,struct nk_vec2) ;
 scalar_t__ FUNC_24 (struct nk_context*,char*,int ,void*,int,int,int) ;
 int FUNC_25 (int,int,int,int) ;
 struct nk_color FUNC_26 (int,int,int) ;
 int FUNC_27 (struct nk_command_buffer*,int,int,int,int,int,int,int,int,float,struct nk_color) ;
 int FUNC_28 (struct nk_command_buffer*,int,int,int,int,float,struct nk_color const) ;
 void* VAR_10 ;
 struct nk_vec2 FUNC_29 (int,int) ;
 struct nk_rect FUNC_30 (struct nk_context*) ;
 struct nk_command_buffer* FUNC_31 (struct nk_context*) ;
 struct nk_rect FUNC_32 (struct nk_context*) ;
 struct nk_panel* FUNC_33 (struct nk_context*) ;
 int FUNC_34 (struct nk_context*,char*) ;
 struct node_editor VAR_11 ;
 int FUNC_35 (struct node_editor*,char*,int ,struct nk_color,int,int) ;
 struct node* FUNC_36 (struct node_editor*,int ) ;
 int FUNC_37 (struct node_editor*) ;
 int FUNC_38 (struct node_editor*,int ,int,int ,int) ;
 int FUNC_39 (struct node_editor*,struct node*) ;
 int FUNC_40 (struct node_editor*,struct node*) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_41(struct nk_context *VAR_13)
{
    int VAR_14 = 0;
    struct nk_rect VAR_15;
    const struct nk_input *VAR_16 = &VAR_13->input;
    struct nk_command_buffer *VAR_17;
    struct node *VAR_18 = 0;
    struct node_editor *VAR_19 = &VAR_11;

    if (!VAR_11.initialized) {
        FUNC_37(&VAR_11);
        VAR_11.initialized = 1;
    }

    if (FUNC_2(VAR_13, "NodeEdit", FUNC_25(0, 0, 800, 600),
        VAR_4|VAR_7|VAR_6|VAR_5))
    {

        VAR_17 = FUNC_31(VAR_13);
        VAR_15 = FUNC_32(VAR_13);
        FUNC_17(VAR_13, VAR_2, VAR_15.h, VAR_19->node_count);
        {
            struct node *VAR_20 = VAR_19->begin;
            struct nk_rect VAR_21 = FUNC_18(VAR_13);
            struct nk_panel *VAR_22 = 0;

            if (VAR_19->show_grid) {

                float VAR_23, VAR_24;
                const float VAR_25 = 32.0f;
                const struct nk_color VAR_26 = FUNC_26(50, 50, 50);
                for (VAR_23 = (float)FUNC_0(VAR_21.x - VAR_19->scrolling.x, VAR_25); VAR_23 < VAR_21.w; VAR_23 += VAR_25)
                    FUNC_28(VAR_17, VAR_23+VAR_21.x, VAR_21.y, VAR_23+VAR_21.x, VAR_21.y+VAR_21.h, 1.0f, VAR_26);
                for (VAR_24 = (float)FUNC_0(VAR_21.y - VAR_19->scrolling.y, VAR_25); VAR_24 < VAR_21.h; VAR_24 += VAR_25)
                    FUNC_28(VAR_17, VAR_21.x, VAR_24+VAR_21.y, VAR_21.x+VAR_21.w, VAR_24+VAR_21.y, 1.0f, VAR_26);
            }


            while (VAR_20) {

                FUNC_20(VAR_13, FUNC_25(VAR_20->bounds.x - VAR_19->scrolling.x,
                    VAR_20->bounds.y - VAR_19->scrolling.y, VAR_20->bounds.w, VAR_20->bounds.h));


                if (FUNC_9(VAR_13, VAR_20->name, VAR_6|VAR_7|VAR_4|VAR_8))
                {


                    VAR_22 = FUNC_33(VAR_13);
                    if (FUNC_15(VAR_16, VAR_0, VAR_22->bounds) &&
                        (!(VAR_20->prev && FUNC_15(VAR_16, VAR_0,
                        FUNC_22(VAR_13, VAR_22->bounds)))) &&
                        VAR_19->end != VAR_20)
                    {
                        VAR_18 = VAR_20;
                    }


                    FUNC_16(VAR_13, 25, 1);
                    FUNC_3(VAR_13, VAR_20->color);
                    VAR_20->color.r = (nk_byte)FUNC_24(VAR_13, "#R:", 0, VAR_20->color.r, 255, 1,1);
                    VAR_20->color.g = (nk_byte)FUNC_24(VAR_13, "#G:", 0, VAR_20->color.g, 255, 1,1);
                    VAR_20->color.b = (nk_byte)FUNC_24(VAR_13, "#B:", 0, VAR_20->color.b, 255, 1,1);
                    VAR_20->color.a = (nk_byte)FUNC_24(VAR_13, "#A:", 0, VAR_20->color.a, 255, 1,1);

                    FUNC_10(VAR_13);
                }
                {

                    float VAR_27;
                    struct nk_rect VAR_28;
                    VAR_28 = FUNC_21(VAR_13, VAR_22->bounds);
                    VAR_28.x += VAR_19->scrolling.x;
                    VAR_28.y += VAR_19->scrolling.y;
                    VAR_20->bounds = VAR_28;


                    VAR_27 = VAR_22->bounds.h / (float)((VAR_20->output_count) + 1);
                    for (VAR_14 = 0; VAR_14 < VAR_20->output_count; ++VAR_14) {
                        struct nk_rect VAR_29;
                        VAR_29.x = VAR_22->bounds.x + VAR_22->bounds.w-4;
                        VAR_29.y = VAR_22->bounds.y + VAR_27 * (float)(VAR_14+1);
                        VAR_29.w = 8; VAR_29.h = 8;
                        FUNC_8(VAR_17, VAR_29, FUNC_26(100, 100, 100));


                        if (FUNC_11(VAR_16, VAR_0, VAR_29, VAR_10)) {
                            VAR_19->linking.active = VAR_10;
                            VAR_19->linking.node = VAR_20;
                            VAR_19->linking.input_id = VAR_20->ID;
                            VAR_19->linking.input_slot = VAR_14;
                        }


                        if (VAR_19->linking.active && VAR_19->linking.node == VAR_20 &&
                            VAR_19->linking.input_slot == VAR_14) {
                            struct nk_vec2 VAR_30 = FUNC_29(VAR_29.x + 3, VAR_29.y + 3);
                            struct nk_vec2 VAR_31 = VAR_16->mouse.pos;
                            FUNC_27(VAR_17, VAR_30, VAR_30, VAR_30 + 50.0f, VAR_30,
                                VAR_31 - 50.0f, VAR_31, VAR_31, VAR_31, 1.0f, FUNC_26(100, 100, 100));
                        }
                    }


                    VAR_27 = VAR_22->bounds.h / (float)((VAR_20->input_count) + 1);
                    for (VAR_14 = 0; VAR_14 < VAR_20->input_count; ++VAR_14) {
                        struct nk_rect VAR_32;
                        VAR_32.x = VAR_22->bounds.x-4;
                        VAR_32.y = VAR_22->bounds.y + VAR_27 * (float)(VAR_14+1);
                        VAR_32.w = 8; VAR_32.h = 8;
                        FUNC_8(VAR_17, VAR_32, FUNC_26(100, 100, 100));
                        if (FUNC_14(VAR_16, VAR_0) &&
                            FUNC_13(VAR_16, VAR_32) &&
                            VAR_19->linking.active && VAR_19->linking.node != VAR_20) {
                            VAR_19->linking.active = VAR_9;
                            FUNC_38(VAR_19, VAR_19->linking.input_id,
                                VAR_19->linking.input_slot, VAR_20->ID, VAR_14);
                        }
                    }
                }
                VAR_20 = VAR_20->next;
            }


            if (VAR_19->linking.active && FUNC_14(VAR_16, VAR_0)) {
                VAR_19->linking.active = VAR_9;
                VAR_19->linking.node = ((void*)0);
                FUNC_1(VAR_12, "linking failed\n");
            }


            for (VAR_14 = 0; VAR_14 < VAR_19->link_count; ++VAR_14) {
                struct node_link *VAR_33 = &VAR_19->links[VAR_14];
                struct node *VAR_34 = FUNC_36(VAR_19, VAR_33->input_id);
                struct node *VAR_35 = FUNC_36(VAR_19, VAR_33->output_id);
                float VAR_36 = VAR_22->bounds.h / (float)((VAR_34->output_count) + 1);
                float VAR_37 = VAR_22->bounds.h / (float)((VAR_35->input_count) + 1);
                struct nk_vec2 VAR_38 = FUNC_23(VAR_13,
                    FUNC_29(VAR_34->bounds.x + VAR_34->bounds.w, 3.0f + VAR_34->bounds.y + VAR_36 * (float)(VAR_33->input_slot+1)));
                struct nk_vec2 VAR_39 = FUNC_23(VAR_13,
                    FUNC_29(VAR_35->bounds.x, 3.0f + VAR_35->bounds.y + VAR_37 * (float)(VAR_33->output_slot+1)));

                VAR_38 -= VAR_19->scrolling.x;
                VAR_38 -= VAR_19->scrolling.y;
                VAR_39 -= VAR_19->scrolling.x;
                VAR_39 -= VAR_19->scrolling.y;
                FUNC_27(VAR_17, VAR_38, VAR_38, VAR_38 + 50.0f, VAR_38,
                    VAR_39 - 50.0f, VAR_39, VAR_39, VAR_39, 1.0f, FUNC_26(100, 100, 100));
            }

            if (VAR_18) {

                FUNC_39(VAR_19, VAR_18);
                FUNC_40(VAR_19, VAR_18);
            }


            if (FUNC_15(VAR_16, VAR_0, FUNC_18(VAR_13))) {
                VAR_20 = VAR_19->begin;
                VAR_19->selected = ((void*)0);
                VAR_19->bounds = FUNC_25(VAR_16->mouse.pos.x, VAR_16->mouse.pos.y, 100, 200);
                while (VAR_20) {
                    struct nk_rect VAR_40 = FUNC_22(VAR_13, VAR_20->bounds);
                    VAR_40.x -= VAR_19->scrolling.x;
                    VAR_40.y -= VAR_19->scrolling.y;
                    if (FUNC_13(VAR_16, VAR_40))
                        VAR_19->selected = VAR_20;
                    VAR_20 = VAR_20->next;
                }
            }


            if (FUNC_4(VAR_13, 0, FUNC_29(100, 220), FUNC_30(VAR_13))) {
                const char *VAR_41[] = {"Show Grid", "Hide Grid"};
                FUNC_16(VAR_13, 25, 1);
                if (FUNC_6(VAR_13, "New", VAR_3))
                    FUNC_35(VAR_19, "New", FUNC_25(400, 260, 180, 220),
                            FUNC_26(255, 255, 255), 1, 2);
                if (FUNC_6(VAR_13, VAR_41[VAR_19->show_grid],VAR_3))
                    VAR_19->show_grid = !VAR_19->show_grid;
                FUNC_5(VAR_13);
            }
        }
        FUNC_19(VAR_13);


        if (FUNC_13(VAR_16, FUNC_30(VAR_13)) &&
            FUNC_12(VAR_16, VAR_1)) {
            VAR_19->scrolling.x += VAR_16->mouse.delta.x;
            VAR_19->scrolling.y += VAR_16->mouse.delta.y;
        }
    }
    FUNC_7(VAR_13);
    return !FUNC_34(VAR_13, "NodeEdit");
}
