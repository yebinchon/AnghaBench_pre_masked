
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buf_mixpos; int primary_mixpos; int playflags; int tmp_buffer_len; scalar_t__ state; TYPE_1__* device; int buflen; int sec_mixpos; scalar_t__ leadin; } ;
struct TYPE_5__ {int fraglen; int buflen; } ;
typedef TYPE_2__ IDirectSoundBufferImpl ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (char*,int,int,int,int ,int ,int,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static DWORD FUNC_4(IDirectSoundBufferImpl *VAR_3, DWORD VAR_4, DWORD VAR_5)
{


 DWORD VAR_6;

 FUNC_3("(%p,%d,%d)\n",VAR_3,VAR_4,VAR_5);
 FUNC_3("writepos=%d, buf_mixpos=%d, primary_mixpos=%d, mixlen=%d\n", VAR_4, VAR_3->buf_mixpos, VAR_3->primary_mixpos, VAR_5);
 FUNC_3("looping=%d, leadin=%d, buflen=%d\n", VAR_3->playflags, VAR_3->leadin, VAR_3->tmp_buffer_len);


 if (VAR_3->leadin && VAR_3->state == VAR_2)
 {
  if (VAR_5 > 2 * VAR_3->device->fraglen)
  {
   VAR_3->primary_mixpos += VAR_5 - 2 * VAR_3->device->fraglen;
   VAR_3->primary_mixpos %= VAR_3->device->buflen;
  }
 }
 VAR_3->leadin = VAR_1;


 VAR_6 = FUNC_0(VAR_3->device->buflen, VAR_3->primary_mixpos, VAR_4);


 if(VAR_5 < VAR_6)
 {

  FUNC_2("Fatal error. Under/Overflow? primary_done=%d, mixpos=%d/%d (%d/%d), primary_mixpos=%d, writepos=%d, mixlen=%d\n", VAR_6,VAR_3->buf_mixpos,VAR_3->tmp_buffer_len,VAR_3->sec_mixpos, VAR_3->buflen, VAR_3->primary_mixpos, VAR_4, VAR_5);
  VAR_3->primary_mixpos = VAR_4 + VAR_5;
  VAR_3->primary_mixpos %= VAR_3->device->buflen;
  return VAR_5;
 }


 VAR_5 -= VAR_6;

 FUNC_3("primary_done=%d, mixlen (primary) = %i\n", VAR_6, VAR_5);

 if (!VAR_5)
  return VAR_6;




 if (VAR_5 + VAR_3->buf_mixpos >= VAR_3->tmp_buffer_len)
 {
  DWORD VAR_7, VAR_8 = VAR_3->tmp_buffer_len - VAR_3->buf_mixpos;
  VAR_7 = FUNC_1(VAR_3, VAR_3->primary_mixpos, VAR_8);
  VAR_5 -= VAR_7;

  if (VAR_3->playflags & VAR_0)
   while (VAR_7 && VAR_5)
   {
    VAR_8 = (VAR_3->tmp_buffer_len < VAR_5 ? VAR_3->tmp_buffer_len : VAR_5);
    VAR_7 = FUNC_1(VAR_3, VAR_3->primary_mixpos, VAR_8);
    VAR_5 -= VAR_7;
   }
 }
 else FUNC_1(VAR_3, VAR_3->primary_mixpos, VAR_5);


 VAR_6 = FUNC_0(VAR_3->device->buflen, VAR_3->primary_mixpos, VAR_4);

 FUNC_3("new primary_mixpos=%d, total mixed data=%d\n", VAR_3->primary_mixpos, VAR_6);


 return VAR_6;
}
