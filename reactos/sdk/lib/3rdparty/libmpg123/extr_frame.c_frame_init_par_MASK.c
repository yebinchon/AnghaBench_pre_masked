
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mpg123_pars_struct {int dummy; } ;
typedef int mpg123_pars ;
struct TYPE_16__ {int feedbuffer; int feedpool; } ;
struct TYPE_14__ {int buffer; int * cleanup_handle; int * r_lseek_handle; int * r_read_handle; int * iohandle; int * r_lseek; int * r_read; } ;
struct TYPE_13__ {int type; int class; } ;
struct TYPE_12__ {scalar_t__ size; scalar_t__ fill; int * rdata; int * data; } ;
struct TYPE_15__ {int* ntom_val; int ntom_step; int decoder_change; int index; int * make_decode_tables; int * synth_mono; int * synth; scalar_t__ down_sample; TYPE_6__ p; TYPE_3__ rdat; int err; int * wrapperclean; int * wrapperdata; int af; int icy; TYPE_2__ cpu_opts; int * xing_toc; int * layerscratch; int * dithernoise; int * conv16to8_buf; scalar_t__ rawdecwins; int * rawdecwin; scalar_t__ rawbuffss; int * rawbuffs; TYPE_1__ buffer; int own_buffer; } ;
typedef TYPE_4__ mpg123_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_6__*,int *,int) ;
 int FUNC_11 (TYPE_4__*) ;

void FUNC_12(mpg123_handle *VAR_3, mpg123_pars *VAR_4)
{
 VAR_3->own_buffer = VAR_2;
 VAR_3->buffer.data = ((void*)0);
 VAR_3->buffer.rdata = ((void*)0);
 VAR_3->buffer.fill = 0;
 VAR_3->buffer.size = 0;
 VAR_3->rawbuffs = ((void*)0);
 VAR_3->rawbuffss = 0;
 VAR_3->rawdecwin = ((void*)0);
 VAR_3->rawdecwins = 0;

 VAR_3->conv16to8_buf = ((void*)0);




 VAR_3->layerscratch = ((void*)0);
 VAR_3->xing_toc = ((void*)0);
 VAR_3->cpu_opts.type = FUNC_2();
 VAR_3->cpu_opts.class = FUNC_1(VAR_3->cpu_opts.type);


 VAR_3->ntom_val[0] = VAR_1>>1;
 VAR_3->ntom_val[1] = VAR_1>>1;
 VAR_3->ntom_step = VAR_1;


 FUNC_11(VAR_3);
 FUNC_7(&VAR_3->icy);
 FUNC_8(VAR_3);



 FUNC_9(&VAR_3->af);
 VAR_3->rdat.r_read = ((void*)0);
 VAR_3->rdat.r_lseek = ((void*)0);
 VAR_3->rdat.iohandle = ((void*)0);
 VAR_3->rdat.r_read_handle = ((void*)0);
 VAR_3->rdat.r_lseek_handle = ((void*)0);
 VAR_3->rdat.cleanup_handle = ((void*)0);
 VAR_3->wrapperdata = ((void*)0);
 VAR_3->wrapperclean = ((void*)0);
 VAR_3->decoder_change = 1;
 VAR_3->err = VAR_0;
 if(VAR_4 == ((void*)0)) FUNC_4(&VAR_3->p);
 else FUNC_10(&VAR_3->p, VAR_4, sizeof(struct mpg123_pars_struct));


 FUNC_0(&VAR_3->rdat.buffer, VAR_3->p.feedpool, VAR_3->p.feedbuffer);


 VAR_3->down_sample = 0;
 FUNC_5(VAR_3);
 VAR_3->synth = ((void*)0);
 VAR_3->synth_mono = ((void*)0);
 VAR_3->make_decode_tables = ((void*)0);




}
