
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int creation_time; int modification_time; int timescale; int duration; int track_type; int graphicsmode; int* opcolor; int balance; int maxPDUsize; int avgPDUsize; int maxbitrate; int avgbitrate; int slidingavgbitrate; int num_url; int num_urn; TYPE_2__* urn; TYPE_1__* url; scalar_t__ language; } ;
typedef TYPE_3__ mj2_tk_t ;
struct TYPE_7__ {int * location; int * name; } ;
struct TYPE_6__ {int * location; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (short,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,TYPE_3__*,unsigned int) ;

void FUNC_5(FILE* VAR_3, FILE* VAR_4, mj2_tk_t *VAR_5,
                    unsigned int VAR_6)
{
    char VAR_7[5];
    int VAR_8, VAR_9;
    VAR_7[4] = '\0';

    FUNC_0(VAR_4, "      <Media BoxType=\"mdia\">\n");
    FUNC_0(VAR_4, "        <MediaHeader BoxType=\"mdhd\">\n");
    FUNC_0(VAR_4, "          <CreationTime>\n");
    if (VAR_2) {
        FUNC_0(VAR_4, "            <InSeconds>%u</InSeconds>\n",
                VAR_5->creation_time);
    }
    if (VAR_1) {
        FUNC_0(VAR_4,
                "            <!-- Seconds since start of Jan. 1, 1904 UTC (Greenwich) -->\n");
    }



    if (VAR_0) {
        FUNC_0(VAR_4, "            <AsLocalTime>");
        FUNC_3(VAR_4, VAR_5->creation_time - 2082844800);
        FUNC_0(VAR_4, "</AsLocalTime>\n");
    }
    FUNC_0(VAR_4, "          </CreationTime>\n");
    FUNC_0(VAR_4, "          <ModificationTime>\n");
    if (VAR_2) {
        FUNC_0(VAR_4, "            <InSeconds>%u</InSeconds>\n",
                VAR_5->modification_time);
    }
    if (VAR_0) {
        FUNC_0(VAR_4, "            <AsLocalTime>");
        FUNC_3(VAR_4, VAR_5->modification_time - 2082844800);
        FUNC_0(VAR_4, "</AsLocalTime>\n");
    }
    FUNC_0(VAR_4, "          </ModificationTime>\n");
    FUNC_0(VAR_4, "          <Timescale>%d</Timescale>\n", VAR_5->timescale);
    if (VAR_1) {
        FUNC_0(VAR_4,
                "          <!-- Timescale defines time units in one second -->\n");
    }
    FUNC_0(VAR_4, "          <Duration>\n");
    if (VAR_2) {
        FUNC_0(VAR_4, "            <InTimeUnits>%u</InTimeUnits>\n",
                VAR_5->duration);
    }
    if (VAR_0) {
        FUNC_0(VAR_4, "            <InSeconds>%12.3f</InSeconds>\n",
                (double)VAR_5->duration / (double)
                VAR_5->timescale);
    }
    FUNC_0(VAR_4, "          </Duration>\n");
    FUNC_1((short int)VAR_5->language, VAR_7);
    FUNC_0(VAR_4, "          <Language>%s</Language>\n", VAR_7);
    FUNC_0(VAR_4, "        </MediaHeader>\n");
    FUNC_0(VAR_4, "        <HandlerReference BoxType=\"hdlr\">\n");
    switch (VAR_5->track_type) {
    case 0:
        FUNC_0(VAR_4,
                "          <HandlerType Code=\"vide\">video media track</HandlerType>\n");
        break;
    case 1:
        FUNC_0(VAR_4, "          <HandlerType Code=\"soun\">Sound</HandlerType>\n");
        break;
    case 2:
        FUNC_0(VAR_4, "          <HandlerType Code=\"hint\">Hint</HandlerType>\n");
        break;
    }
    if (VAR_1) {
        FUNC_0(VAR_4,
                "          <!-- String value shown is not actually read from file. -->\n");
        FUNC_0(VAR_4,
                "          <!-- Shown value is one used for our encode. -->\n");
    }
    FUNC_0(VAR_4, "        </HandlerReference>\n");
    FUNC_0(VAR_4, "        <MediaInfoContainer BoxType=\"minf\">\n");
    switch (VAR_5->track_type) {
    case 0:
        FUNC_0(VAR_4, "          <VideoMediaHeader BoxType=\"vmhd\">\n");
        FUNC_0(VAR_4, "            <GraphicsMode>0x%02x</GraphicsMode>\n",
                VAR_5->graphicsmode);
        if (VAR_1) {
            FUNC_0(VAR_4, "            <!-- Enumerated values of graphics mode: -->\n");
            FUNC_0(VAR_4, "            <!--  0x00 = copy (over existing image); -->\n");
            FUNC_0(VAR_4,
                    "            <!--  0x24 = transparent; 'blue-screen' this image using opcolor; -->\n");
            FUNC_0(VAR_4,
                    "            <!--  0x100 = alpha; alpha-blend this image -->\n");

            FUNC_0(VAR_4,
                    "            <!--  0x102 = pre-multiplied black alpha; image has been already been alpha-blended with black. -->\n");
            FUNC_0(VAR_4,
                    "            <!--  0x110 = component alpha; blend alpha channel(s) and color channels individually. -->\n");
        }
        FUNC_0(VAR_4, "            <Opcolor>\n");
        FUNC_0(VAR_4, "              <Red>0x%02x</Red>\n", VAR_5->opcolor[0]);
        FUNC_0(VAR_4, "              <Green>0x%02x</Green>\n", VAR_5->opcolor[1]);
        FUNC_0(VAR_4, "              <Blue>0x%02x</Blue>\n", VAR_5->opcolor[2]);
        FUNC_0(VAR_4, "            </Opcolor>\n");
        FUNC_0(VAR_4, "          </VideoMediaHeader>\n");
        break;
    case 1:
        FUNC_0(VAR_4, "          <SoundMediaHeader BoxType=\"smhd\">\n");



        FUNC_0(VAR_4, "            <Balance>\n");
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "              <!-- Track audio balance fixes mono track in stereo space. -->\n");
            FUNC_0(VAR_4,
                    "              <!-- Stored as fixed-point binary 8.8 value. Decimal value is approximation. -->\n");
            FUNC_0(VAR_4,
                    "              <!-- 0.0 = center, -1.0 = full left, 1.0 = full right -->\n");
        }
        if (VAR_2) {
            FUNC_0(VAR_4, "              <AsHex>0x%04x</AsHex>\n", VAR_5->balance);
        }
        if (VAR_0) {
            FUNC_0(VAR_4, "              <AsDecimal>%6.3f</AsDecimal>\n",
                    (double)VAR_5->balance / (double)0x0100);
        }
        FUNC_0(VAR_4, "            </Balance>\n");







        FUNC_0(VAR_4, "          </SoundMediaHeader>\n");
        break;
    case 2:
        FUNC_0(VAR_4, "          <HintMediaHeader BoxType=\"hmhd\">\n");
        FUNC_0(VAR_4, "            <MaxPDU_Size>%d</MaxPDU_Size>\n",
                VAR_5->maxPDUsize);
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "            <!-- Size in bytes of largest PDU in this hint stream. -->\n");
        }
        FUNC_0(VAR_4, "            <AvgPDU_Size>%d</AvgPDU_Size>\n",
                VAR_5->avgPDUsize);
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "            <!-- Average size in bytes of a PDU over the entire presentation. -->\n");
        }
        FUNC_0(VAR_4, "            <MaxBitRate>%d</MaxBitRate>\n",
                VAR_5->maxbitrate);
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "            <!-- Maximum rate in bits per second over any window of 1 second. -->\n");
        }
        FUNC_0(VAR_4, "            <AvgBitRate>%d</AvgBitRate>\n",
                VAR_5->avgbitrate);
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "            <!-- Averate rate in bits per second over the entire presentation. -->\n");
        }
        FUNC_0(VAR_4, "            <SlidingAvgBit>%d</SlidingAvgBitRate>\n",
                VAR_5->slidingavgbitrate);
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "            <!-- Maximum rate in bits per second over any window of one minute. -->\n");
        }
        FUNC_0(VAR_4, "          </HintMediaHeader>\n");
        break;
    }
    FUNC_0(VAR_4, "          <DataInfo BoxType=\"dinf\">\n");
    FUNC_0(VAR_4,
            "            <DataReference BoxType=\"dref\"  URL_Count=\"%d\" URN_Count=\"%d\">\n",
            VAR_5->num_url, VAR_5->num_urn);


    if (VAR_1) {
        FUNC_0(VAR_4,
                "              <!-- No entries here mean that file is self-contained, as required by Simple Profile. -->\n");
    }
    for (VAR_9 = 0; VAR_9 < VAR_5->num_url; VAR_9++) {
        FUNC_0(VAR_4,
                "            <DataEntryUrlBox BoxType=\"url[space]\">\n");
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "              <!-- Only the first 16 bytes of URL location are recorded in mj2_to_metadata data structure. -->\n");
        }
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
            FUNC_2(VAR_5->url[VAR_5->num_url].location[VAR_8], VAR_7);
            FUNC_0(VAR_4, "              <Location>%s</Location>\n");
        }
        FUNC_0(VAR_4,
                "            </DataEntryUrlBox>\n");
    }
    for (VAR_9 = 0; VAR_9 < VAR_5->num_urn; VAR_9++) {
        FUNC_0(VAR_4,
                "            <DataEntryUrnBox BoxType=\"urn[space]\">\n");

        if (VAR_1) {
            FUNC_0(VAR_4,
                    "              <!-- Only the first 16 bytes each of URN name and optional location are recorded in mj2_to_metadata data structure. -->\n");
        }
        FUNC_0(VAR_4, "              <Name>");
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
            FUNC_2(VAR_5->urn[VAR_5->num_urn].name[VAR_8], VAR_7);
            FUNC_0(VAR_4, "%s", VAR_7);
        }
        FUNC_0(VAR_4, "</Name>\n");
        FUNC_0(VAR_4, "              <Location>");
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
            FUNC_2(VAR_5->urn[VAR_5->num_urn].location[VAR_8], VAR_7);
            FUNC_0(VAR_4, "%s");
        }
        FUNC_0(VAR_4, "</Location>\n");
        FUNC_0(VAR_4, "            </DataEntryUrnBox>\n");
    }
    FUNC_0(VAR_4, "            </DataReference>\n");
    FUNC_0(VAR_4, "          </DataInfo>\n");

    FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);

    FUNC_0(VAR_4, "        </MediaInfoContainer>\n");
    FUNC_0(VAR_4, "      </Media>\n");
}
