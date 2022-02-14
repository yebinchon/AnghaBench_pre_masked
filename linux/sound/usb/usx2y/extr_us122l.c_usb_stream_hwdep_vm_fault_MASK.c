
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long pgoff; struct page* page; TYPE_1__* vma; } ;
struct usb_stream {int write_size; int read_size; } ;
struct TYPE_4__ {void* write_page; struct usb_stream* s; } ;
struct us122l {int mutex; TYPE_2__ sk; } ;
struct page {int dummy; } ;
struct TYPE_3__ {struct us122l* vm_private_data; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct page* FUNC_4 (void*) ;

__attribute__((used)) static vm_fault_t FUNC_5(struct vm_fault *VAR_2)
{
 unsigned long VAR_3;
 struct page *VAR_4;
 void *VAR_5;
 struct us122l *VAR_6 = VAR_2->vma->vm_private_data;
 struct usb_stream *VAR_7;

 FUNC_2(&VAR_6->mutex);
 VAR_7 = VAR_6->sk.s;
 if (!VAR_7)
  goto unlock;

 VAR_3 = VAR_2->pgoff << VAR_0;
 if (VAR_3 < FUNC_0(VAR_7->read_size))
  VAR_5 = (char *)VAR_7 + VAR_3;
 else {
  VAR_3 -= FUNC_0(VAR_7->read_size);
  if (VAR_3 >= FUNC_0(VAR_7->write_size))
   goto unlock;

  VAR_5 = VAR_6->sk.write_page + VAR_3;
 }
 VAR_4 = FUNC_4(VAR_5);

 FUNC_1(VAR_4);
 FUNC_3(&VAR_6->mutex);

 VAR_2->page = VAR_4;

 return 0;
unlock:
 FUNC_3(&VAR_6->mutex);
 return VAR_1;
}
