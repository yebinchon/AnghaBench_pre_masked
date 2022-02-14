
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int track_type; int w; int h; int horizresolution; int vertresolution; int depth; int num_br; unsigned int* br; int num_jp2x; int* jp2xdata; int hsub; int vsub; int hoff; int voff; int num_samples; int num_tts; int num_samplestochunk; int num_chunks; TYPE_4__* chunk; TYPE_3__* sample; scalar_t__ same_sample_size; TYPE_2__* sampletochunk; TYPE_1__* tts; scalar_t__ or_fieldorder; scalar_t__ or_fieldcount; scalar_t__ fieldorder; scalar_t__ fieldcount; int jp2_struct; scalar_t__* compressorname; } ;
typedef TYPE_5__ mj2_tk_t ;
struct TYPE_10__ {int offset; } ;
struct TYPE_9__ {int sample_size; } ;
struct TYPE_8__ {int first_chunk; int samples_per_chunk; int sample_descr_idx; } ;
struct TYPE_7__ {int sample_count; int sample_delta; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (unsigned int,char*) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(FILE* VAR_4, FILE* VAR_5, mj2_tk_t *VAR_6,
                    unsigned int VAR_7)
{
    char VAR_8[5], VAR_9[33];
    int VAR_10, VAR_11;
    VAR_8[4] = '\0';

    FUNC_0(VAR_5, "          <SampleTable BoxType=\"stbl\">\n");
    if (VAR_1) {
        FUNC_0(VAR_5,
                "            <!-- What follows are specific instances of generic SampleDescription BoxType=\"stsd\" -->\n");
    }
    switch (VAR_6->track_type) {
    case 0:



        FUNC_0(VAR_5, "            <VisualSampleEntry BoxType=\"mjp2\">\n");
        if (VAR_1) {
            FUNC_0(VAR_5,
                    "            <!-- If multiple instances of this box, only first is shown here. -->\n");
            FUNC_0(VAR_5,
                    "            <!-- Width and Height are in pixels.  Unlike the Track Header, there is no fractional part. -->\n");
            FUNC_0(VAR_5,
                    "            <!-- In mj2_to_metadata implementation, the values are not represented separately from Track Header's values. -->\n");
        }

        FUNC_0(VAR_5, "              <WidthAsInteger>%d</WidthAsInteger>\n",
                VAR_6->w);
        FUNC_0(VAR_5, "              <HeightAsInteger>%d</HeightAsInteger>\n",
                VAR_6->h);

        if (VAR_1) {
            FUNC_0(VAR_5,
                    "              <!-- Resolutions are in pixels per inch, for the highest-resolution component (typically luminance). -->\n");
            FUNC_0(VAR_5,
                    "              <!-- Both stored as fixed-point binary 16.16 values. Decimal values are approximations. -->\n");
            FUNC_0(VAR_5,
                    "              <!-- Typical value for both resolutions is 0x00480000  (72.0) -->\n");
        }
        FUNC_0(VAR_5, "              <HorizontalRes>\n");
        if (VAR_2) {
            FUNC_0(VAR_5, "                <AsHex>0x%08x</AsHex>\n",
                    VAR_6->horizresolution);
        }
        if (VAR_0) {
            FUNC_0(VAR_5, "                <AsDecimal>%12.6f</AsDecimal>\n",
                    (double)VAR_6->horizresolution / (double)
                    0x00010000);
        }
        FUNC_0(VAR_5, "              </HorizontalRes>\n");
        FUNC_0(VAR_5, "              <VerticalRes>\n");
        if (VAR_2) {
            FUNC_0(VAR_5, "                <AsHex>0x%08x</AsHex>\n",
                    VAR_6->vertresolution);
        }
        if (VAR_0) {
            FUNC_0(VAR_5, "                <AsDecimal>%12.6f</AsDecimal>\n",
                    (double)VAR_6->vertresolution / (double)
                    0x00010000);
        }
        FUNC_0(VAR_5, "              </VerticalRes>\n");

        VAR_9[0] = '\0';
        for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
            FUNC_2((unsigned int)VAR_6->compressorname[VAR_10], VAR_8);
            FUNC_1(VAR_9,
                   VAR_8);
        }
        VAR_11 = (int)
              VAR_9[0];
        VAR_9[VAR_11 + 1] = '\0';
        FUNC_0(VAR_5, "              <CompressorName>%s</CompressorName>\n",
                VAR_9 + 1);
        if (VAR_1) {
            FUNC_0(VAR_5,
                    "              <!-- Compressor name for debugging.  Standard restricts max length to 31 bytes. -->\n");
            FUNC_0(VAR_5,
                    "              <!-- Usually blank or \"Motion JPEG2000\" -->\n");
        }
        FUNC_0(VAR_5, "              <Depth>0x%02x</Depth>\n", VAR_6->depth);
        if (VAR_1) {
            FUNC_0(VAR_5, "              <!-- Depth is: -->\n");
            FUNC_0(VAR_5,
                    "              <!--   0x20: alpha channels present (color or grayscale) -->\n");
            FUNC_0(VAR_5, "              <!--   0x28: grayscale without alpha -->\n");
            FUNC_0(VAR_5, "              <!--   0x18: color without alpha -->\n");
        }

        FUNC_3(VAR_5, &(VAR_6->jp2_struct));


        FUNC_0(VAR_5, "              <FieldCoding BoxType=\"fiel\">\n");
        FUNC_0(VAR_5, "                <FieldCount>%d</FieldCount>\n",
                (unsigned int)VAR_6->fieldcount);
        if (VAR_1) {
            FUNC_0(VAR_5, "                <!-- Must be either 1 or 2 -->\n");
        }
        FUNC_0(VAR_5, "                <FieldOrder>%d</FieldOrder>\n",
                (unsigned int)VAR_6->fieldorder);
        if (VAR_1) {
            FUNC_0(VAR_5,
                    "                <!-- When FieldCount=2, FieldOrder means: -->\n");
            FUNC_0(VAR_5, "                <!--   0: Field coding unknown -->\n");
            FUNC_0(VAR_5,
                    "                <!--   1: Field with topmost line is stored first in sample; fields are in temporal order -->\n");
            FUNC_0(VAR_5,
                    "                <!--   6: Field with topmost line is stored second in sample; fields are in temporal order -->\n");
            FUNC_0(VAR_5,
                    "                <!-- Defaults: FieldCount=1, FieldOrder=0 if FieldCoding box not present -->\n");
            FUNC_0(VAR_5,
                    "                <!-- Current implementation doesn't retain whether box was actually present. -->\n");
        }
        FUNC_0(VAR_5, "              </FieldCoding>\n");

        FUNC_0(VAR_5,
                "              <MJP2_Profile BoxType=\"jp2p\" Count=\"%d\">\n", VAR_6->num_br);
        for (VAR_10 = 0; VAR_10 < VAR_6->num_br;
                VAR_10++) {
            FUNC_2(VAR_6->br[VAR_10], VAR_8);
            FUNC_0(VAR_5, "                <CompatibleBrand>%s</CompatibleBrand>\n",
                    VAR_8);
        }
        FUNC_0(VAR_5, "              </MJP2_Profile>\n");

        FUNC_0(VAR_5,
                "              <MJP2_Prefix BoxType=\"jp2x\" Count=\"%d\">\n", VAR_6->num_jp2x);
        for (VAR_10 = 0; VAR_10 < VAR_6->num_jp2x; VAR_10++) {

            FUNC_0(VAR_5, "                <Data>0x%02x</Data>\n",
                    VAR_6->jp2xdata[VAR_10]);
        }
        FUNC_0(VAR_5, "              </MJP2_Prefix>\n");

        FUNC_0(VAR_5,
                "              <MJP2_SubSampling BoxType=\"jsub\">\n");
        if (VAR_1) {
            FUNC_0(VAR_5,
                    "              <!-- Typical subsample value is 2 for 4:2:0 -->\n");
        }
        FUNC_0(VAR_5, "                <HorizontalSub>%d</HorizontalSub>\n",
                VAR_6->hsub);
        FUNC_0(VAR_5, "                <VerticalSub>%d</VerticalSub>\n",
                VAR_6->vsub);
        FUNC_0(VAR_5, "                <HorizontalOffset>%d</HorizontalOffset>\n",
                VAR_6->hoff);
        FUNC_0(VAR_5, "                <VerticalOffset>%d</VerticalOffset>\n",
                VAR_6->voff);
        if (VAR_1) {
            FUNC_0(VAR_5,
                    "                <!-- Typical {horizontal, vertical} chroma offset values: -->\n");
            FUNC_0(VAR_5,
                    "                <!-- 4:2:2 format (CCIR601, H.262, MPEG2, MPEG4, recom. Exif): {0, 0} -->\n");
            FUNC_0(VAR_5,
                    "                <!-- 4:2:2 format (JFIF):                                      {1, 0} -->\n");
            FUNC_0(VAR_5,
                    "                <!-- 4:2:0 format (H.262, MPEG2, MPEG4):                       {0, 1} -->\n");
            FUNC_0(VAR_5,
                    "                <!-- 4:2:0 format (MPEG1, H.261, JFIF, recom. Exif):           {1, 1} -->\n");
        }
        FUNC_0(VAR_5,
                "              </MJP2_SubSampling>\n");

        FUNC_0(VAR_5,
                "              <MJP2_OriginalFormat BoxType=\"orfo\">\n");
        FUNC_0(VAR_5,
                "                <OriginalFieldCount>%u</OriginalFieldCount>\n",
                (unsigned int)VAR_6->or_fieldcount);
        if (VAR_1) {
            FUNC_0(VAR_5,
                    "                <!-- In original material before encoding.  Must be either 1 or 2 -->\n");
        }
        FUNC_0(VAR_5,
                "                <OriginalFieldOrder>%u</OriginalFieldOrder>\n",
                (unsigned int)VAR_6->or_fieldorder);
        if (VAR_1) {
            FUNC_0(VAR_5,
                    "                <!-- When FieldCount=2, FieldOrder means: -->\n");
            FUNC_0(VAR_5, "                <!--   0: Field coding unknown -->\n");
            FUNC_0(VAR_5,
                    "                <!--   11: Topmost line came from the earlier field; -->\n");
            FUNC_0(VAR_5,
                    "                <!--   16:  Topmost line came form the later field. -->\n");
            FUNC_0(VAR_5,
                    "                <!-- Defaults: FieldCount=1, FieldOrder=0 if FieldCoding box not present -->\n");
            FUNC_0(VAR_5,
                    "                <!-- Current implementation doesn't retain whether box was actually present. -->\n");
        }
        FUNC_0(VAR_5, "              </MJP2_OriginalFormat>\n");
        FUNC_0(VAR_5, "            </VisualSampleEntry>\n");
        break;
    case 1:
    case 2:
        if (VAR_1) {
            FUNC_0(VAR_5,
                    "            <!-- mj2_to_metadata's data structure doesn't record this currently. -->\n");
        }
        break;
    }
    FUNC_0(VAR_5, "            <TimeToSample BoxType=\"stts\">\n");
    FUNC_0(VAR_5, "              <SampleStatistics>\n");
    FUNC_0(VAR_5, "                <TotalSamples>%d</TotalSamples>\n",
            VAR_6->num_samples);
    if (VAR_1) {
        FUNC_0(VAR_5,
                "                <!-- For video, gives the total frames in the track, by summing all entries in the Sample Table -->\n");
    }
    FUNC_0(VAR_5, "              </SampleStatistics>\n");
    FUNC_0(VAR_5, "              <SampleEntries EntryCount=\"%d\">\n",
            VAR_6->num_tts);
    for (VAR_10 = 0; VAR_10 < VAR_6->num_tts; VAR_10++) {
        FUNC_0(VAR_5,
                "                <Table Entry=\"%u\" SampleCount=\"%d\" SampleDelta=\"%u\" />\n",
                VAR_10 + 1, VAR_6->tts[VAR_10].sample_count, VAR_6->tts[VAR_10].sample_delta);
    }
    FUNC_0(VAR_5, "              </SampleEntries>\n");
    FUNC_0(VAR_5, "            </TimeToSample>\n");

    FUNC_0(VAR_5,
            "            <SampleToChunk BoxType=\"stsc\" Count=\"%d\">\n",
            VAR_6->num_samplestochunk);
    for (VAR_10 = 0; VAR_10 < VAR_6->num_samplestochunk; VAR_10++) {
        FUNC_0(VAR_5, "              <FirstChunk>%u</FirstChunk>\n",
                VAR_6->sampletochunk[VAR_10].first_chunk);
        FUNC_0(VAR_5, "              <SamplesPerChunk>%u</SamplesPerChunk>\n",
                VAR_6->sampletochunk[VAR_10].samples_per_chunk);
        FUNC_0(VAR_5, "              <SampleDescrIndex>%u</SampleDescrIndex>\n",
                VAR_6->sampletochunk[VAR_10].sample_descr_idx);
    }
    FUNC_0(VAR_5, "            </SampleToChunk>\n");


    FUNC_0(VAR_5, "            <SampleSize BoxType=\"stsz\">\n");
    if (VAR_6->same_sample_size) {

        FUNC_0(VAR_5, "              <Sample_Size>%u</Sample_Size>\n",
                VAR_6->sample[0].sample_size);
        if (VAR_1) {
            FUNC_0(VAR_5,
                    "              <!-- Non-zero value means all samples have that size. -->\n");
            FUNC_0(VAR_5,
                    "              <!-- So <Sample_Count> (aka Entry_Count in std.) has no meaning, is suppressed from this output, and no table follows. -->\n");
        }
    } else {
        FUNC_0(VAR_5, "              <Sample_Size>0</Sample_Size>\n");
        if (VAR_1)
            if (VAR_3) {
                FUNC_0(VAR_5,
                        "              <!-- Zero value means samples have different sizes, given in table next of length Sample_Count (aka Entry_Count in std). -->\n");
            } else {
                FUNC_0(VAR_5,
                        "              <!-- Zero value means samples have different sizes, given in table (not shown) of length Sample_Count (aka Entry_Count in std). -->\n");
            }
        FUNC_0(VAR_5, "              <Sample_Count>%u</Sample_Count>\n",
                VAR_6->num_samples);
        if (VAR_3)
            for (VAR_10 = 0; VAR_10 < (int)VAR_6->num_samples; VAR_10++) {
                FUNC_0(VAR_5, "              <EntrySize Num=\"%u\">%u</EntrySize>\n", VAR_10 + 1,
                        VAR_6->sample[VAR_10].sample_size);
            }
    }
    FUNC_0(VAR_5, "            </SampleSize>\n");

    FUNC_0(VAR_5, "            <ChunkOffset BoxType=\"stco\">\n");

    FUNC_0(VAR_5, "              <EntryCount>%u</EntryCount>\n",
            VAR_6->num_chunks);
    if (VAR_1) {
        FUNC_0(VAR_5,
                "              <!-- For this implementation, EntryCount shown is one calculated during file read of <SampleToChunk> data. -->\n");
        FUNC_0(VAR_5,
                "              <!-- Implementation will report failure during file read of <ChunkOffset> data if read entry-count disagrees. -->\n");
    }
    if (VAR_3)
        for (VAR_10 = 0; VAR_10 < (int)VAR_6->num_chunks; VAR_10++) {
            FUNC_0(VAR_5, "              <Chunk_Offset Num=\"%d\">%u</Chunk_Offset>\n",
                    VAR_10 + 1, VAR_6->chunk[VAR_10].offset);
        }
    FUNC_0(VAR_5, "            </ChunkOffset>\n");

    FUNC_0(VAR_5, "          </SampleTable>\n");
}
