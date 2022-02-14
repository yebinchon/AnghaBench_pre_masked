
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct wined3d_map_desc {unsigned int* data; } ;
struct wined3d_buffer_desc {unsigned int byte_width; int usage; int access; int structure_byte_stride; int misc_flags; int bind_flags; } ;
struct wined3d_buffer {int dummy; } ;
struct wined3d_box {unsigned int left; unsigned int right; int bottom; int back; int front; int top; int member_0; } ;
struct ddraw_surface {int IDirect3DTexture2_iface; } ;
struct d3d_viewport {struct d3d_device* active_device; } ;
struct TYPE_32__ {int dwStatus; } ;
struct TYPE_23__ {int dwInstructionOffset; TYPE_9__ dsStatus; } ;
struct TYPE_24__ {scalar_t__ lpData; } ;
struct d3d_execute_buffer {unsigned int index_pos; unsigned int index_size; int src_vertex_pos; TYPE_16__ data; struct wined3d_buffer* src_vertex_buffer; struct wined3d_buffer* dst_vertex_buffer; struct wined3d_buffer* index_buffer; TYPE_1__ desc; } ;
struct d3d_device {int world; int view; int proj; int handle_table; int wined3d_device; int ddraw; int IDirect3DDevice3_iface; } ;
typedef unsigned int WORD ;
struct TYPE_31__ {unsigned int hDestTexture; unsigned int hSrcTexture; } ;
struct TYPE_27__ {unsigned int v1; } ;
struct TYPE_26__ {unsigned int v2; } ;
struct TYPE_25__ {unsigned int v3; } ;
struct TYPE_30__ {int wFlags; TYPE_4__ u1; TYPE_3__ u2; TYPE_2__ u3; } ;
struct TYPE_29__ {int* dwArg; } ;
struct TYPE_28__ {int drstRenderStateType; int dlstLightStateType; int dtstTransformStateType; } ;
struct TYPE_22__ {int dwMask; int dwValue; unsigned int dwOffset; int bNegate; } ;
struct TYPE_21__ {unsigned int wCount; unsigned int bSize; int bOpcode; } ;
struct TYPE_20__ {int hSrcMatrix2; int hSrcMatrix1; int hDestMatrix; } ;
struct TYPE_19__ {int wCount; int wFirst; } ;
struct TYPE_18__ {int dwFlags; int wStart; int wDest; int dwCount; } ;
struct TYPE_17__ {TYPE_6__ u2; TYPE_5__ u1; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int D3DVERTEX ;
typedef TYPE_7__ D3DTRIANGLE ;
typedef int D3DTLVERTEX ;
typedef TYPE_8__ D3DTEXTURELOAD ;
typedef TYPE_9__ D3DSTATUS ;
typedef TYPE_10__ D3DSTATE ;
typedef TYPE_11__ D3DPROCESSVERTICES ;
typedef TYPE_12__ D3DPOINT ;
typedef TYPE_13__ D3DMATRIXMULTIPLY ;
typedef int D3DMATRIX ;
typedef TYPE_14__ D3DINSTRUCTION ;
typedef TYPE_15__ D3DBRANCH ;
typedef unsigned int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ) ;
 int VAR_18 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_19 ;
 int FUNC_9 (char*,...) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_10 (TYPE_16__*) ;
 int VAR_35 ;
 int FUNC_11 (int ,int ) ;
 void* FUNC_12 (int *,int ,int ) ;
 int VAR_36 ;
 unsigned int FUNC_13 (int,unsigned int) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (struct d3d_viewport*,int ) ;
 int FUNC_16 (int ,struct wined3d_buffer_desc*,int *,int *,int *,struct wined3d_buffer**) ;
 int FUNC_17 (struct wined3d_buffer*) ;
 int FUNC_18 (struct wined3d_buffer*) ;
 int FUNC_19 (int ,int ,int ,int,int ,int ,int ,int ,struct wined3d_box*) ;
 int FUNC_20 (int ,unsigned int,unsigned int) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (int ,int,int,int,struct wined3d_buffer*,int *,int ,int ) ;
 int FUNC_23 (int ,struct wined3d_buffer*,int ,int ) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int ,int ,int ) ;
 int FUNC_26 (int ,int ,struct wined3d_buffer*,int,int) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ,struct wined3d_map_desc*,struct wined3d_box*,int) ;
 int FUNC_29 (int ,int ) ;

HRESULT FUNC_30(struct d3d_execute_buffer *VAR_37,
        struct d3d_device *VAR_38, struct d3d_viewport *VAR_39)
{
    DWORD VAR_40 = VAR_37->data.dwInstructionOffset;
    char *VAR_41 = (char *)VAR_37->desc.lpData + VAR_40;
    unsigned int VAR_42, VAR_43;
    struct wined3d_map_desc VAR_44;
    struct wined3d_box VAR_45 = {0};
    HRESULT VAR_46;

    if (VAR_39->active_device != VAR_38)
    {
        FUNC_9("Viewport %p active device is %p.\n",
                VAR_39, VAR_39->active_device);
        return VAR_15;
    }


    FUNC_15(VAR_39, VAR_18);

    FUNC_7("ExecuteData :\n");
    if (FUNC_8(VAR_35))
        FUNC_10(&(VAR_37->data));

    for (;;)
    {
        D3DINSTRUCTION *VAR_47 = (D3DINSTRUCTION *)VAR_41;
        BYTE VAR_48;
        WORD VAR_49;

        VAR_49 = VAR_47->wCount;
        VAR_48 = VAR_47->bSize;
        VAR_41 += sizeof(*VAR_47);
        VAR_43 = 0;

        switch (VAR_47->bOpcode)
        {
            case 139:
            {
                const D3DPOINT *VAR_50 = (D3DPOINT *)VAR_41;
                FUNC_24(VAR_38->wined3d_device, VAR_29, 0);
                FUNC_26(VAR_38->wined3d_device, 0,
                        VAR_37->dst_vertex_buffer, 0, sizeof(D3DTLVERTEX));
                FUNC_27(VAR_38->wined3d_device,
                        FUNC_11(VAR_38->ddraw, VAR_1));

                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                    FUNC_21(VAR_38->wined3d_device, VAR_50[VAR_42].wFirst, VAR_50[VAR_42].wCount);

                VAR_41 += sizeof(*VAR_50) * VAR_49;
                break;
            }

            case 142:
                VAR_43 = 2;
                FUNC_24(VAR_38->wined3d_device, VAR_28, 0);

            case 131:
            {
                WORD *VAR_51;
                unsigned int VAR_52 = VAR_37->index_pos, VAR_53;
                FUNC_7("TRIANGLE         (%d)\n", VAR_49);

                if (!VAR_49)
                    break;

                if (!VAR_43)
                {
                    FUNC_24(VAR_38->wined3d_device, VAR_30, 0);
                    VAR_43 = 3;
                }

                VAR_53 = VAR_49 * VAR_43;

                if (VAR_37->index_size < VAR_53)
                {
                    unsigned int VAR_54 = FUNC_13(VAR_37->index_size * 2, VAR_53);
                    struct wined3d_buffer *VAR_55;
                    struct wined3d_buffer_desc VAR_56;

                    VAR_56.byte_width = VAR_54 * sizeof(*VAR_51);
                    VAR_56.usage = VAR_21 | VAR_23 | VAR_22;
                    VAR_56.bind_flags = VAR_24;
                    VAR_56.access = VAR_31
                            | VAR_32 | VAR_33;
                    VAR_56.misc_flags = 0;
                    VAR_56.structure_byte_stride = 0;

                    if (FUNC_1(VAR_46 = FUNC_16(VAR_38->wined3d_device, &VAR_56,
                            ((void*)0), ((void*)0), &VAR_36, &VAR_55)))
                        return VAR_46;

                    VAR_37->index_size = VAR_54;
                    if (VAR_37->index_buffer)
                        FUNC_17(VAR_37->index_buffer);
                    VAR_37->index_buffer = VAR_55;
                    VAR_52 = 0;
                }
                else if (VAR_37->index_size - VAR_53 < VAR_52)
                {
                    VAR_52 = 0;
                }

                VAR_45.left = VAR_52 * sizeof(*VAR_51);
                VAR_45.right = (VAR_52 + VAR_53) * sizeof(*VAR_51);
                if (FUNC_1(VAR_46 = FUNC_28(FUNC_18(VAR_37->index_buffer), 0, &VAR_44,
                        &VAR_45, VAR_27 | (VAR_52 ? VAR_26 : VAR_25))))
                    return VAR_46;
                VAR_51 = VAR_44.data;

                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                {
                    D3DTRIANGLE *VAR_57 = (D3DTRIANGLE *)VAR_41;
                    FUNC_7("  v1: %d  v2: %d  v3: %d\n",VAR_57->u1.v1, VAR_57->u2.v2, VAR_57->u3.v3);
                    FUNC_7("  Flags : ");
                    if (FUNC_8(VAR_35))
                    {

                        if (VAR_57->wFlags & VAR_9)
                            FUNC_7("EDGEENABLE1 ");
                        if (VAR_57->wFlags & VAR_10)
                            FUNC_7("EDGEENABLE2 ");
                        if (VAR_57->wFlags & VAR_9)
                            FUNC_7("EDGEENABLE3 ");

                        if (VAR_57->wFlags == VAR_11)
                            FUNC_7("EVEN ");
                        if (VAR_57->wFlags == VAR_12)
                            FUNC_7("ODD ");
                        if (VAR_57->wFlags == VAR_13)
                            FUNC_7("START ");
                        if ((VAR_57->wFlags > 0) && (VAR_57->wFlags < 30))
                            FUNC_7("STARTFLAT(%u) ", VAR_57->wFlags);
                        FUNC_7("\n");
                    }

                    switch (VAR_43)
                    {
                        case 3:
                            VAR_51[(VAR_42 * VAR_43) + 2] = VAR_57->u3.v3;

                        case 2:
                            VAR_51[(VAR_42 * VAR_43) + 1] = VAR_57->u2.v2;
                            VAR_51[(VAR_42 * VAR_43) ] = VAR_57->u1.v1;
                    }
                    VAR_41 += VAR_48;
                }

                FUNC_29(FUNC_18(VAR_37->index_buffer), 0);

                FUNC_26(VAR_38->wined3d_device, 0,
                        VAR_37->dst_vertex_buffer, 0, sizeof(D3DTLVERTEX));
                FUNC_27(VAR_38->wined3d_device,
                        FUNC_11(VAR_38->ddraw, VAR_1));
                FUNC_23(VAR_38->wined3d_device, VAR_37->index_buffer, VAR_20, 0);
                FUNC_20(VAR_38->wined3d_device, VAR_52, VAR_53);

                VAR_37->index_pos = VAR_52 + VAR_53;
                break;
            }

            case 141:
                FUNC_9("MATRIXLOAD-s     (%u)\n", VAR_49);
                VAR_41 += VAR_49 * VAR_48;
                break;

            case 140:
                FUNC_7("MATRIXMULTIPLY   (%d)\n", VAR_49);
                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                {
                    D3DMATRIXMULTIPLY *VAR_58 = (D3DMATRIXMULTIPLY *)VAR_41;
                    D3DMATRIX *VAR_59, *VAR_60, *VAR_61;

                    VAR_59 = FUNC_12(&VAR_38->handle_table, VAR_58->hDestMatrix - 1, VAR_16);
                    VAR_60 = FUNC_12(&VAR_38->handle_table, VAR_58->hSrcMatrix1 - 1, VAR_16);
                    VAR_61 = FUNC_12(&VAR_38->handle_table, VAR_58->hSrcMatrix2 - 1, VAR_16);

                    if (!VAR_59 || !VAR_60 || !VAR_61)
                    {
                        FUNC_0("Invalid matrix handle (a %#x -> %p, b %#x -> %p, c %#x -> %p).\n",
                                VAR_58->hDestMatrix, VAR_59, VAR_58->hSrcMatrix1, VAR_60, VAR_58->hSrcMatrix2, VAR_61);
                    }
                    else
                    {
                        FUNC_7("dst %p, src1 %p, src2 %p.\n", VAR_59, VAR_60, VAR_61);
                        FUNC_14(VAR_59, VAR_61, VAR_60);
                    }

                    VAR_41 += VAR_48;
                }
                break;

            case 133:
                FUNC_7("STATETRANSFORM   (%d)\n", VAR_49);
                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                {
                    D3DSTATE *VAR_62 = (D3DSTATE *)VAR_41;
                    D3DMATRIX *VAR_63;

                    VAR_63 = FUNC_12(&VAR_38->handle_table, VAR_62->u2.dwArg[0] - 1, VAR_16);
                    if (!VAR_63)
                    {
                        FUNC_0("Invalid matrix handle %#x.\n", VAR_62->u2.dwArg[0]);
                    }
                    else
                    {
                        if (VAR_62->u1.dtstTransformStateType == VAR_8)
                            VAR_38->world = VAR_62->u2.dwArg[0];
                        if (VAR_62->u1.dtstTransformStateType == VAR_7)
                            VAR_38->view = VAR_62->u2.dwArg[0];
                        if (VAR_62->u1.dtstTransformStateType == VAR_6)
                            VAR_38->proj = VAR_62->u2.dwArg[0];
                        FUNC_5(&VAR_38->IDirect3DDevice3_iface,
                                VAR_62->u1.dtstTransformStateType, VAR_63);
                    }

                    VAR_41 += VAR_48;
                }
                break;

            case 135:
                FUNC_7("STATELIGHT       (%d)\n", VAR_49);
                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                {
                    D3DSTATE *VAR_64 = (D3DSTATE *)VAR_41;

                    if (FUNC_1(FUNC_3(&VAR_38->IDirect3DDevice3_iface,
                            VAR_64->u1.dlstLightStateType, VAR_64->u2.dwArg[0])))
                        FUNC_9("Failed to set light state.\n");

                    VAR_41 += VAR_48;
                }
                break;

            case 134:
                FUNC_7("STATERENDER      (%d)\n", VAR_49);
                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                {
                    D3DSTATE *VAR_65 = (D3DSTATE *)VAR_41;

                    if (FUNC_1(FUNC_4(&VAR_38->IDirect3DDevice3_iface,
                            VAR_65->u1.drstRenderStateType, VAR_65->u2.dwArg[0])))
                        FUNC_9("Failed to set render state.\n");

                    VAR_41 += VAR_48;
                }
                break;

            case 138:
                FUNC_7("PROCESSVERTICES  (%d)\n", VAR_49);

                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                {
                    D3DPROCESSVERTICES *VAR_66 = (D3DPROCESSVERTICES *)VAR_41;
                    DWORD VAR_67 = VAR_66->dwFlags & VAR_4;

                    FUNC_7("  start %u, dest %u, count %u, flags %#x.\n",
                            VAR_66->wStart, VAR_66->wDest, VAR_66->dwCount, VAR_66->dwFlags);

                    if (VAR_66->dwFlags & VAR_5)
                    {
                        static int VAR_68;
                        if (!VAR_68++) FUNC_2("D3DPROCESSVERTICES_UPDATEEXTENTS not implemented.\n");
                    }
                    if (VAR_66->dwFlags & VAR_3)
                        FUNC_2("D3DPROCESSVERTICES_NOCOLOR not implemented.\n");

                    switch (VAR_67)
                    {
                        case 128:
                        case 129:
                            FUNC_26(VAR_38->wined3d_device, 0,
                                    VAR_37->src_vertex_buffer, VAR_37->src_vertex_pos, sizeof(D3DVERTEX));
                            if (VAR_67 == 128)
                            {
                                FUNC_27(VAR_38->wined3d_device,
                                        FUNC_11(VAR_38->ddraw, VAR_2));
                                FUNC_25(VAR_38->wined3d_device,
                                        VAR_34, VAR_19);
                            }
                            else
                            {
                                FUNC_27(VAR_38->wined3d_device,
                                        FUNC_11(VAR_38->ddraw, VAR_0));
                                FUNC_25(VAR_38->wined3d_device,
                                        VAR_34, VAR_18);
                            }

                            FUNC_22(VAR_38->wined3d_device, VAR_66->wStart, VAR_66->wDest,
                                    VAR_66->dwCount, VAR_37->dst_vertex_buffer, ((void*)0), 0, VAR_1);
                            break;

                        case 130:
                            VAR_45.left = (VAR_37->src_vertex_pos + VAR_66->wStart) * sizeof(D3DTLVERTEX);
                            VAR_45.right = VAR_45.left + VAR_66->dwCount * sizeof(D3DTLVERTEX);
                            VAR_45.top = VAR_45.front = 0;
                            VAR_45.bottom = VAR_45.back = 1;
                            FUNC_19(VAR_38->wined3d_device,
                                    FUNC_18(VAR_37->dst_vertex_buffer), 0,
                                    VAR_66->wDest * sizeof(D3DTLVERTEX), 0, 0,
                                    FUNC_18(VAR_37->src_vertex_buffer), 0, &VAR_45);
                            break;

                        default:
                            FUNC_2("Unhandled vertex processing op %#x.\n", VAR_67);
                            break;
                    }

                    VAR_41 += VAR_48;
                }
                break;

            case 132:
                FUNC_7("TEXTURELOAD    (%u)\n", VAR_49);

                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                {
                    D3DTEXTURELOAD *VAR_69 = (D3DTEXTURELOAD *)VAR_41;
                    struct ddraw_surface *VAR_70, *VAR_71;

                    VAR_41 += VAR_48;

                    if (!(VAR_70 = FUNC_12(&VAR_38->handle_table,
                            VAR_69->hDestTexture - 1, VAR_17)))
                    {
                        FUNC_9("Invalid destination texture handle %#x.\n", VAR_69->hDestTexture);
                        continue;
                    }
                    if (!(VAR_71 = FUNC_12(&VAR_38->handle_table,
                            VAR_69->hSrcTexture - 1, VAR_17)))
                    {
                        FUNC_9("Invalid source texture handle %#x.\n", VAR_69->hSrcTexture);
                        continue;
                    }

                    FUNC_6(&VAR_70->IDirect3DTexture2_iface, &VAR_71->IDirect3DTexture2_iface);
                }
                break;

            case 143:
                FUNC_7("EXIT             (%u)\n", VAR_49);
                VAR_41 += VAR_48;
                goto end_of_buffer;

            case 144:
                FUNC_7("BRANCHFORWARD    (%d)\n", VAR_49);
                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                {
                    D3DBRANCH *VAR_72 = (D3DBRANCH *)VAR_41;

                    if ((VAR_37->data.dsStatus.dwStatus & VAR_72->dwMask) == VAR_72->dwValue)
                    {
                        if (!VAR_72->bNegate)
                        {
                            FUNC_7(" Branch to %d\n", VAR_72->dwOffset);
                            if (VAR_72->dwOffset) {
                                VAR_41 = (char*)VAR_47 + VAR_72->dwOffset;
                                break;
                            }
                        }
                    }
                    else
                    {
                        if (VAR_72->bNegate)
                        {
                            FUNC_7(" Branch to %d\n", VAR_72->dwOffset);
                            if (VAR_72->dwOffset) {
                                VAR_41 = (char*)VAR_47 + VAR_72->dwOffset;
                                break;
                            }
                        }
                    }

                    VAR_41 += VAR_48;
                }
                break;

            case 136:
                FUNC_9("SPAN-s           (%u)\n", VAR_49);
                VAR_41 += VAR_49 * VAR_48;
                break;

            case 137:
                FUNC_7("SETSTATUS        (%d)\n", VAR_49);
                for (VAR_42 = 0; VAR_42 < VAR_49; ++VAR_42)
                {
                    VAR_37->data.dsStatus = *(D3DSTATUS *)VAR_41;
                    VAR_41 += VAR_48;
                }
                break;

            default:
                FUNC_0("Unhandled OpCode %#x.\n",VAR_47->bOpcode);
                VAR_41 += VAR_49 * VAR_48;
                break;
        }
    }

end_of_buffer:
    return VAR_14;
}
