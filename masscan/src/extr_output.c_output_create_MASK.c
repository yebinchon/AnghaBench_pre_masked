
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* time_t ;
struct TYPE_14__ {scalar_t__ period; int offset; scalar_t__ last; void* next; void* directory; int filesize; } ;
struct TYPE_10__ {void* stylesheet; } ;
struct TYPE_8__ {int ip; int port; } ;
struct Output {int is_virgin_file; int format; TYPE_7__ rotate; int * fp; int * funcs; int * src; void* filename; TYPE_3__ xml; int is_append; int is_show_host; int is_show_closed; int is_show_open; int is_interactive; int is_gmt; int is_banner; TYPE_1__ redis; void* when_scan_started; struct Masscan const* masscan; } ;
struct TYPE_12__ {scalar_t__ timeout; int offset; scalar_t__* directory; int filesize; } ;
struct TYPE_13__ {int format; TYPE_5__ rotate; scalar_t__* filename; scalar_t__* stylesheet; int is_append; int is_show_host; int is_show_closed; int is_show_open; int is_interactive; } ;
struct TYPE_9__ {int ip; int port; } ;
struct Masscan {int nic_count; TYPE_6__ output; TYPE_4__* nic; int is_gmt; int is_banners; TYPE_2__ redis; } ;
struct TYPE_11__ {int src; } ;
typedef int FILE ;


 struct Output* FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 void* FUNC_3 (scalar_t__*,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_4 (scalar_t__,scalar_t__,int) ;
 int VAR_6 ;
 int * FUNC_5 (struct Output*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_7 (int ) ;
 int VAR_9 ;
 int VAR_10 ;

struct Output *
FUNC_8(const struct Masscan *VAR_11, unsigned VAR_12)
{
    struct Output *VAR_13;
    unsigned VAR_14;


    VAR_13 = FUNC_0(1, sizeof(*VAR_13));
    VAR_13->masscan = VAR_11;
    VAR_13->when_scan_started = FUNC_7(0);
    VAR_13->is_virgin_file = 1;




    VAR_13->rotate.period = VAR_11->output.rotate.timeout;
    VAR_13->rotate.offset = VAR_11->output.rotate.offset;
    VAR_13->rotate.filesize = VAR_11->output.rotate.filesize;
    VAR_13->redis.port = VAR_11->redis.port;
    VAR_13->redis.ip = VAR_11->redis.ip;
    VAR_13->is_banner = VAR_11->is_banners;
    VAR_13->is_gmt = VAR_11->is_gmt;
    VAR_13->is_interactive = VAR_11->output.is_interactive;
    VAR_13->is_show_open = VAR_11->output.is_show_open;
    VAR_13->is_show_closed = VAR_11->output.is_show_closed;
    VAR_13->is_show_host = VAR_11->output.is_show_host;
    VAR_13->is_append = VAR_11->output.is_append;
    VAR_13->xml.stylesheet = FUNC_1(VAR_11->output.stylesheet);
    VAR_13->rotate.directory = FUNC_1(VAR_11->output.rotate.directory);
    if (VAR_11->nic_count <= 1)
        VAR_13->filename = FUNC_1(VAR_11->output.filename);
    else
        VAR_13->filename = FUNC_3(VAR_11->output.filename, VAR_12);

    for (VAR_14=0; VAR_14<8; VAR_14++) {
        VAR_13->src[VAR_14] = VAR_11->nic[VAR_14].src;
    }





    VAR_13->format = VAR_11->output.format;
    switch (VAR_13->format) {
    case 133:
        VAR_13->funcs = &VAR_8;
        break;
    case 129:
        VAR_13->funcs = &VAR_9;
        break;
    case 128:
        VAR_13->funcs = &VAR_10;
        break;
    case 134:
        VAR_13->funcs = &VAR_4;
        break;
    case 132:
        VAR_13->funcs = &VAR_5;
        break;
    case 136:
        VAR_13->funcs = &VAR_2;
        break;
    case 137:
        VAR_13->funcs = &VAR_1;
        break;
    case 135:
        VAR_13->funcs = &VAR_3;
        break;
    case 130:
        VAR_13->funcs = &VAR_7;
        break;
    case 131:
        VAR_13->funcs = &VAR_6;
        break;
    default:
        VAR_13->funcs = &VAR_6;
        break;
    }






    if (VAR_11->output.filename[0] && VAR_13->funcs != &VAR_6) {
        FILE *VAR_15;

        VAR_15 = FUNC_5(VAR_13, VAR_11->output.filename);
        if (VAR_15 == ((void*)0)) {
            FUNC_6(VAR_11->output.filename);
            FUNC_2(1);
        }

        VAR_13->fp = VAR_15;
        VAR_13->rotate.last = FUNC_7(0);
    }






    if (VAR_11->output.rotate.timeout == 0) {

        VAR_13->rotate.next = (time_t)VAR_0;
    } else {
        if (VAR_13->rotate.offset > 1) {
            VAR_13->rotate.next = FUNC_4(
                                    VAR_13->rotate.last-VAR_13->rotate.period,
                                    VAR_13->rotate.period, VAR_13->rotate.offset);
        } else {
            VAR_13->rotate.next = FUNC_4(
                                    VAR_13->rotate.last,
                                    VAR_13->rotate.period, VAR_13->rotate.offset);
        }
    }



    return VAR_13;
}
