
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic1; scalar_t__ magic2; scalar_t__ version; } ;
typedef TYPE_1__ runtime_pseudo_reloc_v2 ;
struct TYPE_5__ {int target; int sym; int flags; } ;
typedef TYPE_2__ runtime_pseudo_reloc_item_v2 ;
struct TYPE_6__ {int target; int addend; } ;
typedef TYPE_3__ runtime_pseudo_reloc_item_v1 ;
typedef int ptrdiff_t ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (void*,int*,int) ;

__attribute__((used)) static void
FUNC_2 (void * VAR_2, void * VAR_3, void * VAR_4)
{
  ptrdiff_t VAR_5, VAR_6;
  ptrdiff_t VAR_7 = (ptrdiff_t) ((char *)VAR_3 - (char*)VAR_2);
  runtime_pseudo_reloc_v2 *VAR_8 = (runtime_pseudo_reloc_v2 *) VAR_2;
  runtime_pseudo_reloc_item_v2 *VAR_9;





  if (VAR_7 < 8)
    return;
  if (VAR_7 >= 12
      && VAR_8->magic1 == 0 && VAR_8->magic2 == 0
      && VAR_8->version == VAR_0)
    {
      VAR_8++;
    }

  if (VAR_8->magic1 != 0 || VAR_8->magic2 != 0)
    {



      runtime_pseudo_reloc_item_v1 * VAR_10;
      for (VAR_10 = (runtime_pseudo_reloc_item_v1 *) VAR_8;
    VAR_10 < (runtime_pseudo_reloc_item_v1 *)VAR_3;
           VAR_10++)
 {
   DWORD VAR_11;
   VAR_7 = (ptrdiff_t) VAR_4 + VAR_10->target;
   VAR_11 = (*((DWORD*) VAR_7)) + VAR_10->addend;
   FUNC_1 ((void *) VAR_7, &VAR_11, sizeof(DWORD));
 }
      return;
    }




  if (VAR_8->version != VAR_1)
    {
      FUNC_0 ("  Unknown pseudo relocation protocol version %d.\n",
        (int) VAR_8->version);
      return;
    }






  VAR_9 = (runtime_pseudo_reloc_item_v2 *) &VAR_8[1];

  for (; VAR_9 < (runtime_pseudo_reloc_item_v2 *) VAR_3; VAR_9++)
    {

      VAR_7 = (ptrdiff_t) VAR_4 + VAR_9->target;




      VAR_5 = (ptrdiff_t) VAR_4 + VAR_9->sym;
      VAR_5 = *((ptrdiff_t *) VAR_5);







      switch ((VAR_9->flags & 0xff))
        {
          case 8:
     VAR_6 = (ptrdiff_t) (*((unsigned char *)VAR_7));
     if ((VAR_6 & 0x80) != 0)
       VAR_6 |= ~((ptrdiff_t) 0xff);
     break;
   case 16:
     VAR_6 = (ptrdiff_t) (*((unsigned short *)VAR_7));
     if ((VAR_6 & 0x8000) != 0)
       VAR_6 |= ~((ptrdiff_t) 0xffff);
     break;
   case 32:
     VAR_6 = (ptrdiff_t) (*((unsigned int *)VAR_7));




     break;





   default:
     VAR_6=0;
     FUNC_0 ("  Unknown pseudo relocation bit size %d.\n",
      (int) (VAR_9->flags & 0xff));
     break;
        }


      VAR_6 -= ((ptrdiff_t) VAR_4 + VAR_9->sym);
      VAR_6 += VAR_5;


      switch ((VAR_9->flags & 0xff))
 {
         case 8:
           FUNC_1 ((void *) VAR_7, &VAR_6, 1);
    break;
  case 16:
           FUNC_1 ((void *) VAR_7, &VAR_6, 2);
    break;
  case 32:
           FUNC_1 ((void *) VAR_7, &VAR_6, 4);
    break;





 }
     }
}
