
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

void FUNC_1()
{

    FUNC_0(VAR_0, "                Help for the 'mj2_to_metadata' Program\n");
    FUNC_0(VAR_0, "                ======================================\n");
    FUNC_0(VAR_0, "The -h option displays this information on screen.\n\n");

    FUNC_0(VAR_0,
            "mj2_to_metadata generates an XML file from a Motion JPEG 2000 file.\n");
    FUNC_0(VAR_0,
            "The generated XML shows the structural, but not (yet) curatorial,\n");
    FUNC_0(VAR_0,
            "metadata from the movie header and from the JPEG 2000 image and tile\n");
    FUNC_0(VAR_0,
            "headers of a sample frame.  Excluded: low-level packed-bits image data.\n\n");

    FUNC_0(VAR_0, "By Default\n");
    FUNC_0(VAR_0, "----------\n");
    FUNC_0(VAR_0,
            "The metadata includes the jp2 image and tile headers of the first frame.\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "Metadata values are shown in 'raw' form (e.g., hexadecimal) as stored in the\n");
    FUNC_0(VAR_0,
            "file, and, if apt, in a 'derived' form that is more quickly grasped.\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "Notes explaining the XML are embedded as terse comments.  These include\n");
    FUNC_0(VAR_0, "   meaning of non-obvious tag abbreviations;\n");
    FUNC_0(VAR_0, "   range and precision of valid values;\n");
    FUNC_0(VAR_0, "   interpretations of values, such as enumerations; and\n");
    FUNC_0(VAR_0, "   current implementation limitations.\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "The sample-size and chunk-offset tables, each with 1 row per frame, are not reported.\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "The file is self-contained and no verification (e.g., against a DTD) is requested.\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "Required Parameters (except with -h)\n");
    FUNC_0(VAR_0, "------------------------------------\n");
    FUNC_0(VAR_0,
            "[Caution: file strings that contain spaces should be wrapped with quotes.]\n");
    FUNC_0(VAR_0,
            "-i input.mj2  : where 'input' is any source file name or path.\n");
    FUNC_0(VAR_0,
            "                MJ2 files created with 'frames_to_mj2' are supported so far.\n");
    FUNC_0(VAR_0,
            "                These are silent, single-track, 'MJ2 Simple Profile' videos.\n");
    FUNC_0(VAR_0,
            "-o output.xml : where 'output' is any destination file name or path.\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "Optional Parameters\n");
    FUNC_0(VAR_0, "-------------------\n");
    FUNC_0(VAR_0, "-h            : Display this help information.\n");
    FUNC_0(VAR_0, "-n            : Suppress all mj2_to_metadata notes.\n");
    FUNC_0(VAR_0,
            "-t            : Include sample-size and chunk-offset tables.\n");
    FUNC_0(VAR_0,
            "-f n          : where n > 0.  Include jp2 header info for frame n [default=1].\n");
    FUNC_0(VAR_0, "-f 0          : No jp2 header info.\n");
    FUNC_0(VAR_0,
            "-r            : Suppress all 'raw' data for which a 'derived' form exists.\n");
    FUNC_0(VAR_0, "-d            : Suppress all 'derived' data.\n");
    FUNC_0(VAR_0,
            "                (If both -r and -d given, -r will be ignored.)\n");
    FUNC_0(VAR_0,
            "-v string     : Verify against the DTD file located by the string.\n");
    FUNC_0(VAR_0,
            "                Prepend quoted 'string' with either SYSTEM or PUBLIC keyword.\n");
    FUNC_0(VAR_0,
            "                Thus, for the distributed DTD placed in the same directory as\n");
    FUNC_0(VAR_0,
            "                the output file: -v \"SYSTEM mj2_to_metadata.dtd\"\n");
    FUNC_0(VAR_0,
            "                \"PUBLIC\" is used with an access protocol (e.g., http:) + URL.\n");

    FUNC_0(VAR_0, "\n");

}
