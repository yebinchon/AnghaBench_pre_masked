
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct RtfData {int allocated; unsigned int font_scale; unsigned int relative; int first_link; scalar_t__ char_pos; scalar_t__ char_pos_rel; int force_color; int * current_link; int ptr; int data; int in_text; } ;
struct TYPE_10__ {int charset; unsigned int numFonts; int version; int dsize; unsigned int topic_maplen; int** topic_map; int* topic_end; TYPE_2__* fonts; } ;
struct TYPE_9__ {int reference; int first_link; TYPE_4__* file; } ;
struct TYPE_7__ {int lfPitchAndFamily; int lfCharSet; char* lfFaceName; } ;
struct TYPE_8__ {int color; TYPE_1__ LogFont; } ;
typedef TYPE_3__ HLPFILE_PAGE ;
typedef TYPE_4__ HLPFILE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
 int VAR_0 ;






 int FUNC_0 (int*,int) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;


 int FUNC_5 (TYPE_3__*,struct RtfData*,int*,int*,unsigned int*) ;
 int FUNC_6 (struct RtfData*,char*) ;




 int FUNC_7 (int ,int ,int) ;





 int VAR_1 ;


 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*) ;
 int* FUNC_11 (int*,int*) ;
 int FUNC_12 (char*,char*,...) ;

BOOL FUNC_13(HLPFILE_PAGE* VAR_2, struct RtfData* VAR_3,
                           unsigned VAR_4, unsigned VAR_5)
{
    HLPFILE *VAR_6 = VAR_2->file;
    BYTE *VAR_7, *VAR_8;
    DWORD VAR_9 = VAR_2->reference;
    unsigned VAR_10, VAR_11 = -1, VAR_12, VAR_13 = 0, VAR_14 = 0;
    unsigned VAR_15, VAR_16;
    char VAR_17[1024];
    const char* VAR_18 = ((void*)0);

    VAR_3->in_text = VAR_1;
    VAR_3->data = VAR_3->ptr = FUNC_7(FUNC_3(), 0, VAR_3->allocated = 32768);
    VAR_3->char_pos = 0;
    VAR_3->first_link = *(VAR_3->current_link = ((void*)0));
    VAR_3->force_color = VAR_0;
    VAR_3->font_scale = VAR_4;
    VAR_3->relative = VAR_5;
    VAR_3->char_pos_rel = 0;

    switch (VAR_6->charset)
    {
    case 149:
    case 153: VAR_15 = 1252; break;
    case 131: VAR_15 = 932; break;
    case 140: VAR_15 = 949; break;
    case 142: VAR_15 = 936; break;
    case 150: VAR_15 = 950; break;
    case 141: VAR_15 = 1253; break;
    case 129: VAR_15 = 1254; break;
    case 139: VAR_15 = 1255; break;
    case 152: VAR_15 = 1256; break;
    case 151: VAR_15 = 1257; break;
    case 128: VAR_15 = 1258; break;
    case 132: VAR_15 = 1251; break;
    case 148: VAR_15 = 1250; break;
    case 130: VAR_15 = 874; break;
    case 134: VAR_15 = 1361; break;
    case 133: VAR_18 = "mac"; break;
    default:
        FUNC_9("Unsupported charset %u\n", VAR_6->charset);
        VAR_15 = 1252;
    }
    if (VAR_18)
    {
        FUNC_12(VAR_17, "{\\rtf1\\%s\\deff0", VAR_18);
        if (!FUNC_6(VAR_3, VAR_17)) return VAR_0;
    }
    else
    {
        FUNC_12(VAR_17, "{\\rtf1\\ansi\\ansicpg%d\\deff0", VAR_15);
        if (!FUNC_6(VAR_3, VAR_17)) return VAR_0;
    }


    if (!FUNC_6(VAR_3, "{\\fonttbl")) return VAR_0;
    for (VAR_10 = 0; VAR_10 < VAR_6->numFonts; VAR_10++)
    {
        const char* VAR_19;
        switch (VAR_6->fonts[VAR_10].LogFont.lfPitchAndFamily & 0xF0)
        {
        case 146: VAR_19 = "modern"; break;
        case 145: VAR_19 = "roman"; break;
        case 143: VAR_19 = "swiss"; break;
        case 144: VAR_19 = "script"; break;
        case 147: VAR_19 = "decor"; break;
        default: VAR_19 = "nil"; break;
        }
        FUNC_12(VAR_17, "{\\f%d\\f%s\\fprq%d\\fcharset%d %s;}",
                VAR_10, VAR_19,
                VAR_6->fonts[VAR_10].LogFont.lfPitchAndFamily & 0x0F,
                VAR_6->fonts[VAR_10].LogFont.lfCharSet,
                VAR_6->fonts[VAR_10].LogFont.lfFaceName);
        if (!FUNC_6(VAR_3, VAR_17)) return VAR_0;
    }
    if (!FUNC_6(VAR_3, "}")) return VAR_0;

    if (!FUNC_6(VAR_3, "{\\colortbl ;\\red0\\green128\\blue0;")) return VAR_0;
    for (VAR_10 = 0; VAR_10 < VAR_6->numFonts; VAR_10++)
    {
        FUNC_12(VAR_17, "\\red%d\\green%d\\blue%d;",
                FUNC_4(VAR_6->fonts[VAR_10].color),
                FUNC_2(VAR_6->fonts[VAR_10].color),
                FUNC_1(VAR_6->fonts[VAR_10].color));
        if (!FUNC_6(VAR_3, VAR_17)) return VAR_0;
    }
    if (!FUNC_6(VAR_3, "}")) return VAR_0;

    do
    {
        if (VAR_6->version <= 16)
        {
            VAR_10 = (VAR_9 - 0x0C) / VAR_6->dsize;
            VAR_12 = (VAR_9 - 0x0C) % VAR_6->dsize;
        }
        else
        {
            VAR_10 = (VAR_9 - 0x0C) >> 14;
            VAR_12 = (VAR_9 - 0x0C) & 0x3FFF;
        }

        if (VAR_6->version <= 16 && VAR_10 != VAR_11 && VAR_11 != -1)
        {

            VAR_9 -= 12;
            VAR_12 -= 12;
        }

        if (VAR_10 >= VAR_6->topic_maplen) {FUNC_10("maplen\n"); break;}
        VAR_7 = VAR_6->topic_map[VAR_10] + VAR_12;
        if (VAR_7 + 0x15 >= VAR_6->topic_end) {FUNC_10("extra\n"); break;}
        VAR_8 = FUNC_11(VAR_7 + FUNC_0(VAR_7, 0), VAR_6->topic_end);
        if (VAR_10 != VAR_11) {VAR_14 = 0; VAR_11 = VAR_10;}

        switch (VAR_7[0x14])
        {
        case 135:
            if (VAR_13++) goto done;
            break;
        case 137:
        case 138:
        case 136:
            if (!FUNC_5(VAR_2, VAR_3, VAR_7, VAR_8, &VAR_16)) return VAR_0;
            if (VAR_5 > VAR_10 * 0x8000 + VAR_14)
                VAR_3->char_pos_rel = VAR_3->char_pos;
            VAR_14 += VAR_16;
            break;
        default:
            FUNC_8("buf[0x14] = %x\n", VAR_7[0x14]);
        }
        if (VAR_6->version <= 16)
        {
            VAR_9 += FUNC_0(VAR_7, 0xc);
            if (FUNC_0(VAR_7, 0xc) == 0)
                break;
        }
        else
            VAR_9 = FUNC_0(VAR_7, 0xc);
    } while (VAR_9 != 0xffffffff);
done:
    VAR_2->first_link = VAR_3->first_link;
    return FUNC_6(VAR_3, "}");
}
