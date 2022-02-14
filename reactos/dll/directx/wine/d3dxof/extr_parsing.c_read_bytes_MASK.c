
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rem_bytes; int buffer; } ;
typedef TYPE_1__ parse_buffer ;
typedef int LPVOID ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(parse_buffer * VAR_2, LPVOID VAR_3, DWORD VAR_4)
{
  if (VAR_2->rem_bytes < VAR_4)
    return VAR_0;
  FUNC_0(VAR_3, VAR_2->buffer, VAR_4);
  VAR_2->buffer += VAR_4;
  VAR_2->rem_bytes -= VAR_4;
  return VAR_1;
}
