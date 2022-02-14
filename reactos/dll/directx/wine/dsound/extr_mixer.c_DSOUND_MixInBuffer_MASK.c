
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ buflen; scalar_t__ mix_buffer; int (* mixfunction ) (int *,scalar_t__,int) ;int * tmp_buffer; TYPE_2__* pwfx; } ;
struct TYPE_14__ {int dwFlags; } ;
struct TYPE_15__ {int buf_mixpos; scalar_t__ tmp_buffer_len; scalar_t__ sec_mixpos; int playflags; scalar_t__ state; scalar_t__ primary_mixpos; TYPE_6__* device; TYPE_3__ dsbd; int buflen; scalar_t__ resampleinmixer; TYPE_1__* buffer; int * tmp_buffer; } ;
struct TYPE_13__ {int nBlockAlign; } ;
struct TYPE_12__ {int * memory; } ;
typedef int INT ;
typedef TYPE_4__ IDirectSoundBufferImpl ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,scalar_t__,int ) ;
 int * FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_4__*,scalar_t__) ;
 int FUNC_7 (char*,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (char*,...) ;
 int VAR_4 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,scalar_t__,int) ;
 int FUNC_11 (int *,scalar_t__,scalar_t__) ;
 int FUNC_12 (int *,scalar_t__,int) ;

__attribute__((used)) static DWORD FUNC_13(IDirectSoundBufferImpl *VAR_5, DWORD VAR_6, DWORD VAR_7)
{
 INT VAR_8 = VAR_7, VAR_9;
 BYTE *VAR_10 = (VAR_5->tmp_buffer ? VAR_5->tmp_buffer : VAR_5->buffer->memory) + VAR_5->buf_mixpos, *VAR_11;
 DWORD VAR_12, VAR_13;

 FUNC_8("buf_mixpos=%d/%d sec_mixpos=%d/%d\n", VAR_5->buf_mixpos, VAR_5->tmp_buffer_len, VAR_5->sec_mixpos, VAR_5->buflen);
 FUNC_8("(%p,%d,%d)\n",VAR_5,VAR_6,VAR_7);

 FUNC_9(VAR_5->buf_mixpos + VAR_8 <= VAR_5->tmp_buffer_len);

 if (VAR_8 % VAR_5->device->pwfx->nBlockAlign) {
  INT VAR_14 = VAR_5->device->pwfx->nBlockAlign;
  FUNC_7("length not a multiple of block size, len = %d, block size = %d\n", VAR_8, VAR_14);
  VAR_8 -= VAR_8 % VAR_14;
 }


 FUNC_2(VAR_5, VAR_5->sec_mixpos, FUNC_6(VAR_5, VAR_5->buf_mixpos+VAR_8) - VAR_5->sec_mixpos, VAR_4);
 if (VAR_5->resampleinmixer)
  VAR_10 = VAR_5->device->tmp_buffer;


 VAR_11 = FUNC_3(VAR_5, VAR_8);
 if (VAR_11)
  VAR_10 = VAR_11;

 VAR_13 = FUNC_5(VAR_5->device, VAR_6);

 if ((VAR_6 + VAR_8) <= VAR_5->device->buflen)
  VAR_5->device->mixfunction(VAR_10, VAR_5->device->mix_buffer + VAR_13, VAR_8);
 else
 {
  DWORD VAR_15 = VAR_5->device->buflen - VAR_6;
  VAR_5->device->mixfunction(VAR_10, VAR_5->device->mix_buffer + VAR_13, VAR_15);
  VAR_5->device->mixfunction(VAR_10 + VAR_15, VAR_5->device->mix_buffer, VAR_8 - VAR_15);
 }

 VAR_12 = VAR_5->sec_mixpos;
 VAR_5->buf_mixpos += VAR_8;

 if (VAR_5->buf_mixpos >= VAR_5->tmp_buffer_len) {
  if (VAR_5->buf_mixpos > VAR_5->tmp_buffer_len)
   FUNC_7("Mixpos (%u) past buflen (%u), capping...\n", VAR_5->buf_mixpos, VAR_5->tmp_buffer_len);
  if (VAR_5->playflags & VAR_1) {
   VAR_5->buf_mixpos -= VAR_5->tmp_buffer_len;
  } else if (VAR_5->buf_mixpos >= VAR_5->tmp_buffer_len) {
   VAR_5->buf_mixpos = VAR_5->sec_mixpos = 0;
   VAR_5->state = VAR_3;
  }
  FUNC_4(VAR_5);
 }

 VAR_5->sec_mixpos = FUNC_6(VAR_5, VAR_5->buf_mixpos);
 VAR_9 = FUNC_0(VAR_5->buflen, VAR_5->sec_mixpos, VAR_12);

 if (VAR_5->dsbd.dwFlags & VAR_0 &&
     VAR_5->state != VAR_2) {
  FUNC_1(VAR_5, VAR_12, VAR_9);
 }


 VAR_5->primary_mixpos += VAR_8;
 if (VAR_5->primary_mixpos >= VAR_5->device->buflen)
  VAR_5->primary_mixpos -= VAR_5->device->buflen;
 return VAR_8;
}
