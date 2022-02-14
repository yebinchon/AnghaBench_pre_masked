
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; char* len; } ;
struct TYPE_5__ {scalar_t__ nCallingConvention; int uFlags; int nNumber; int nArgCount; int* anArgs; TYPE_1__ strName; } ;
typedef int FILE ;
typedef TYPE_2__ EXPORT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;

int
FUNC_1(FILE *VAR_10, EXPORT *VAR_11)
{
    int VAR_12;
    int VAR_13 = 0;
    int VAR_14 = 0;

    if (VAR_11->nCallingConvention != VAR_2 &&
        (VAR_11->uFlags & VAR_6) == 0)
    {

        if (!VAR_7 || (VAR_11->nCallingConvention != VAR_1)
                || (VAR_11->uFlags & VAR_3)
                || (VAR_11->strName.buf[0] == '?'))
        {
            return 0;
        }
        VAR_13 = 1;
    }


    if (VAR_13)
    {
        FUNC_0(VAR_10, "extern ");
        VAR_14 = 1;
    }

    do
    {
        if (VAR_11->uFlags & VAR_4)
        {

            FUNC_0(VAR_10, "void ");
        }
        else if (VAR_11->uFlags & VAR_5)
        {
            FUNC_0(VAR_10, "__int64 ");
        }
        else
        {
            FUNC_0(VAR_10, "int ");
        }

        if ((VAR_8 == VAR_0) &&
            VAR_11->nCallingConvention == VAR_1)
        {
            FUNC_0(VAR_10, "__stdcall ");
        }


        if (VAR_11->strName.buf[0] == '?')
        {
            FUNC_0(VAR_10, "stub_function%d(", VAR_11->nNumber);
        }
        else
        {
            if (!VAR_13 || VAR_14)
                FUNC_0(VAR_10, "%.*s(", VAR_11->strName.len, VAR_11->strName.buf);
            else
                FUNC_0(VAR_10, "$relaytrace$%.*s(", VAR_11->strName.len, VAR_11->strName.buf);
        }

        for (VAR_12 = 0; VAR_12 < VAR_11->nArgCount; VAR_12++)
        {
            if (VAR_12 != 0) FUNC_0(VAR_10, ", ");
            switch (VAR_11->anArgs[VAR_12])
            {
                case 131: FUNC_0(VAR_10, "long"); break;
                case 130: FUNC_0(VAR_10, "void*"); break;
                case 129: FUNC_0(VAR_10, "char*"); break;
                case 128: FUNC_0(VAR_10, "wchar_t*"); break;
                case 135: FUNC_0(VAR_10, "double"); break;
                case 132 : FUNC_0(VAR_10, "__int64"); break;

                case 133 : FUNC_0(VAR_10, "GUID"); break;
                case 134: FUNC_0(VAR_10, "float"); break;
            }
            FUNC_0(VAR_10, " a%d", VAR_12);
        }

        if (VAR_14)
        {
            FUNC_0(VAR_10, ");\n\n");
        }
    } while (VAR_14--);

    if (!VAR_13)
    {
        FUNC_0(VAR_10, ")\n{\n\tDbgPrint(\"WARNING: calling stub %.*s(",
                VAR_11->strName.len, VAR_11->strName.buf);
    }
    else
    {
        FUNC_0(VAR_10, ")\n{\n");
        if (VAR_11->uFlags & VAR_4)
        {

        }
        else if (VAR_11->uFlags & VAR_5)
        {
            FUNC_0(VAR_10, "\t__int64 retval;\n");
        }
        else
        {
            FUNC_0(VAR_10, "\tint retval;\n");
        }
        FUNC_0(VAR_10, "\tif (TRACE_ON(relay))\n\t\tDPRINTF(\"%s: %.*s(",
                VAR_9, VAR_11->strName.len, VAR_11->strName.buf);
    }

    for (VAR_12 = 0; VAR_12 < VAR_11->nArgCount; VAR_12++)
    {
        if (VAR_12 != 0) FUNC_0(VAR_10, ",");
        switch (VAR_11->anArgs[VAR_12])
        {
            case 131: FUNC_0(VAR_10, "0x%%lx"); break;
            case 130: FUNC_0(VAR_10, "0x%%p"); break;
            case 129: FUNC_0(VAR_10, "'%%s'"); break;
            case 128: FUNC_0(VAR_10, "'%%ws'"); break;
            case 135: FUNC_0(VAR_10, "%%f"); break;
            case 132: FUNC_0(VAR_10, "%%\"PRIx64\""); break;
            case 133: FUNC_0(VAR_10, "'%%s'"); break;
            case 134: FUNC_0(VAR_10, "%%f"); break;
        }
    }
    FUNC_0(VAR_10, ")\\n\"");

    for (VAR_12 = 0; VAR_12 < VAR_11->nArgCount; VAR_12++)
    {
        FUNC_0(VAR_10, ", ");
        switch (VAR_11->anArgs[VAR_12])
        {
            case 131: FUNC_0(VAR_10, "(long)a%d", VAR_12); break;
            case 130: FUNC_0(VAR_10, "(void*)a%d", VAR_12); break;
            case 129: FUNC_0(VAR_10, "(char*)a%d", VAR_12); break;
            case 128: FUNC_0(VAR_10, "(wchar_t*)a%d", VAR_12); break;
            case 135: FUNC_0(VAR_10, "(double)a%d", VAR_12); break;
            case 132: FUNC_0(VAR_10, "(__int64)a%d", VAR_12); break;
            case 133: FUNC_0(VAR_10, "wine_dbgstr_guid(&a%d)", VAR_12); break;
            case 134: FUNC_0(VAR_10, "(float)a%d", VAR_12); break;
        }
    }
    FUNC_0(VAR_10, ");\n");

    if (VAR_11->nCallingConvention == VAR_2)
    {
        FUNC_0(VAR_10, "\t__wine_spec_unimplemented_stub(\"%s\", __FUNCTION__);\n", VAR_9);
    }
    else if (VAR_13)
    {
        if (VAR_11->uFlags & VAR_4)
        {
            FUNC_0(VAR_10,"\t");
        }
        else
        {
            FUNC_0(VAR_10, "\tretval = ");
        }
        FUNC_0(VAR_10, "%.*s(", VAR_11->strName.len, VAR_11->strName.buf);

        for (VAR_12 = 0; VAR_12 < VAR_11->nArgCount; VAR_12++)
        {
            if (VAR_12 != 0) FUNC_0(VAR_10, ", ");
            FUNC_0(VAR_10, "a%d", VAR_12);
        }
        FUNC_0(VAR_10, ");\n");
    }

    if (!VAR_13)
        FUNC_0(VAR_10, "\treturn 0;\n}\n\n");
    else if ((VAR_11->uFlags & VAR_4) == 0)
    {
        if (VAR_11->uFlags & VAR_5)
        {
            FUNC_0(VAR_10, "\tif (TRACE_ON(relay))\n\t\tDPRINTF(\"%s: %.*s: retval = %%\"PRIx64\"\\n\", retval);\n",
                    VAR_9, VAR_11->strName.len, VAR_11->strName.buf);
        }
        else
        {
            FUNC_0(VAR_10, "\tif (TRACE_ON(relay))\n\t\tDPRINTF(\"%s: %.*s: retval = 0x%%lx\\n\", retval);\n",
                    VAR_9, VAR_11->strName.len, VAR_11->strName.buf);
        }
        FUNC_0(VAR_10, "\treturn retval;\n}\n\n");
    }

    return 1;
}
